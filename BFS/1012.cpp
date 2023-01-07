#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
int board[50][50];
int vis[50][50];
int t, m, n, k;
int x, y;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void)
{	
	cin >> t;
	while(t > 0) {
		int num = 0;
		queue<pair<int, int>> Q;
		cin >> m >> n >> k;
		
		for(int i=0; i < m; i++) {
			fill(board[i], board[i]+n, 0);
			fill(vis[i], vis[i]+n, 0);			
		}
	
		for(int i=0; i < k; i++) {
			cin >> x >> y;
			
			board[x][y]=1;
		}
		
		for(int i=0; i < m; i++) {
			for(int j=0; j < n; j++) {
				if(board[i][j] == 0 || vis[i][j] == 1) continue;
				num++;
				Q.push({i, j});
				
				while(!Q.empty()) {
					auto cur = Q.front();
					Q.pop();
					
					for(int dir=0; dir < 4; dir++) {
						int nx = cur.X + dx[dir]; 
						int ny = cur.Y + dy[dir];
						
						if(nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
						if(board[nx][ny] == 0 || vis[nx][ny] != 0) continue;
			
						vis[nx][ny] = 1;
						Q.push({nx, ny});
					}
				}
			}
		}
		t--;
		cout << num << '\n';
	}
}

