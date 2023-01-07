#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
string board[105];
bool vs[100][100]; 
int n;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int cnt1=0;
	int cnt2=0;	
	queue<pair<int, int>> Q;

	cin >> n;
	for(int i=0; i < n; i++) cin >> board[i];

	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			if(vs[i][j]) continue;
			vs[i][j] = true;
			Q.push({i, j});

			cnt1++;
			while(!Q.empty()) {
				auto cur = Q.front();
				Q.pop();
				
				for(int dir=0; dir<4; dir++) {
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir];
					
					if(nx < 0 || ny < 0 || nx >= n  || ny >= n) continue;
					if(board[nx][ny] != board[cur.X][cur.Y] || vs[nx][ny]) continue;

					vs[nx][ny] = true;
					Q.push({nx, ny});
				}
			}
		}
	}
	
	for(int i=0; i < n; i++) fill(vs[i], vs[i]+n, 0);
	
	for(int i=0; i < n; i++) {
		for(int j=0; j < n; j++) {
			if(board[i][j] == 'G')
				board[i][j] = 'R';
		}
	}
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			if(vs[i][j]) continue;
			 
			vs[i][j] = true;
			Q.push({i, j});
			
			cnt2++;
			while(!Q.empty()) {
				auto cur = Q.front();
				Q.pop();
				
				for(int dir=0; dir<4; dir++) {
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir];
					
					if(nx < 0 || ny < 0 || nx >= n  || ny >= n) continue;
					if(board[nx][ny] != board[cur.X][cur.Y] || vs[nx][ny]) continue;

					vs[nx][ny] = true;
					Q.push({nx, ny});
				}
			}
		}
	}
	cout << cnt1 << ' ' << cnt2;
}
