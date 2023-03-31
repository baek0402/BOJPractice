#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int board[105][105];
int vis[105][105];
int dx[4] = {0, 1, -1, 0};
int dy[4] = {1, 0, 0, -1};

int width[105];

int main(void)
{
	int n, m, k;
	cin >> n >> m >> k;
	
	int k1 = k;
	//1. 칠해진 영역 구하기	
	while(k1--) {
		int x1, y1, x2, y2; 
		cin >> x1 >> y1 >> x2 >> y2;
		
		for(int i = y1; i < y2; i++) {
			for(int j = x1; j < x2; j++) {
				board[i][j] = 1;
			}
		}
	}
	
	int cnt = 0;

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(board[i][j] == 1 || vis[i][j] == 1) continue;

			queue<pair<int, int>> Q;

			vis[i][j] = 1;
			Q.push({i, j});
			int area=1;
			
			while(!Q.empty()) {			
				auto cur = Q.front();
				Q.pop();
			
				for(int dir = 0; dir < 4; dir++) {
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir];
					
					if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
					if(board[nx][ny] == 1 || vis[nx][ny] == 1) continue;
					
					area++;
					vis[nx][ny] = 1;
					Q.push({nx, ny});
				}
			}
			width[cnt++] = area;
			//cout << width[cnt] << '\n';
		}
	}
	sort(width, width+cnt);
	
	cout << cnt << '\n';
	for(int i = 0; i < cnt; i++) {
		cout << width[i] << ' ';
	}
}
