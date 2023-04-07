#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int board[104][104];
bool vis[104][104];
int n;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, 1, -1, 0};

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> board[i][j];
		}
	}
	
	cout << "n";
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
	
			queue<pair<int, int>> Q;
			cout << "a\n";
			//for(int k = 1; k <= 100; k++) {		
				if(board[i][j] >= 4 && vis[i][j] != 0)
					Q.push({i, j});
				
				auto cur = Q.front(); Q.pop();
				
				while(!Q.empty()) {
					auto cur = Q.front(); Q.pop();
			
					for(int dir = 0; dir < 4; dir++) {
						int nx = cur.X + dx[dir];
						int ny = cur.Y + dy[dir];
							
						if(nx < 0 || nx >= n || ny < 0 || nx >= n) continue;
						if(board[nx][ny] <= 3 || vis[nx][ny] >= 1) continue;
							
						vis[nx][ny] = 1;
						Q.push({nx, ny});			
					}		
				}	
			//}		
		}
	}
}
