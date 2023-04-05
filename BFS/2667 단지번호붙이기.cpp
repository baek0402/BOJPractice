#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

string board[30];
int vis[30][30];
int area[700]; //1. 이부분 25x25니까 최대 625라는점 
int n;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, 1, -1, 0};

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int cnt=0;
	
	cin >> n;
	for(int i=0; i < n; i++) {
		cin >> board[i];	
	}
	
	queue<pair<int, int>> Q;

	for(int i=0; i < n; i++) {
		for(int j=0; j < n; j++) {
			
			if(vis[i][j] == 1 || board[i][j] != '1') continue;

			Q.push({i,j});
			vis[i][j] = 1;
			cnt += 1;	 //영역 +1 
			area[cnt]=1;
			
			cout << "cnt : " << cnt << '\n';

			while(!Q.empty()) {									
				auto cur = Q.front();
				Q.pop();

				for(int dir=0; dir < 4; dir++) {
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir];
					
					if(nx < 0 || nx >= n || ny < 0 || nx >= n) continue;
					if(board[nx][ny] != '1' || vis[nx][ny] >= 1) continue;

					vis[nx][ny] = 1;
					Q.push({nx, ny});	
					area[cnt] += 1;
				}				
			}
		}
	}	
	
	sort(area, area+cnt+1);
	
	cout << cnt << '\n';
	
	for(int i=1; i <= cnt; i++) {
		cout << area[i] << '\n';
	}
	
	
}
