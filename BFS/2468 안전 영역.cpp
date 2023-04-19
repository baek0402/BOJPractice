#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int board[104][104];
int vis[104][104];
int n;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, 1, -1, 0};

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;
	
	int height = 0;	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> board[i][j];
			
			height = max(height, board[i][j]);
		}
	}
	
	int max_cnt=0;
	queue<pair<int, int>> Q;
	
	for(int k = 0; k <= height; k++) {	
		int cnt = 0;

		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				if(board[i][j] <= k || vis[i][j] == 1) continue;
				cnt++;
				
				Q.push({i, j});
				vis[i][j] = 1;
				
				while(!Q.empty()) {
					auto cur = Q.front(); Q.pop();
			
					for(int dir = 0; dir < 4; dir++) {
						int nx = cur.X + dx[dir];
						int ny = cur.Y + dy[dir];
							
						if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
						if(board[nx][ny] <= k || vis[nx][ny] >= 1) continue;
						
						vis[nx][ny] = 1;
						Q.push({nx, ny});			
					}
				}
			}
		}
		max_cnt = max(max_cnt, cnt);
		
		for(int i = 0; i < n; i++)
			fill(vis[i], vis[i]+n, 0);
	}
	
	cout << max_cnt;
}
