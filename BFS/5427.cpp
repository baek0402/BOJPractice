#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
string board[1005];
int f_vis[1005][1005];
int s_vis[1005][1005];
int t, n, m;
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	

	cin >> t;
	while (t--) {
		bool escape = false;
		//cout << t << '\n';
		queue<pair<int, int>> Q1;
		queue<pair<int, int>> Q2;

		cin >> m >> n;
		for (int i = 0; i < n; i++) cin >> board[i];
		for (int i = 0; i < n; i++) {
			fill(f_vis[i], f_vis[i] + m, -1);
			fill(s_vis[i], s_vis[i] + m, -1);
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (board[i][j] == '*') {
					f_vis[i][j] = 0;
					Q1.push({ i, j });
				}
				if (board[i][j] == '@') {
					s_vis[i][j] = 0;
					Q2.push({ i, j });
				}
			}
		}

		//fire
		while (!Q1.empty()) {
			auto cur = Q1.front(); Q1.pop();
			for (int dir = 0; dir < 4; dir++) {
				int nx = cur.X + dx[dir];
				int ny = cur.Y + dy[dir];

				if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
				//if (board[nx][ny] == '#' || f_vis[nx][ny] >= 0) continue;
				if(board[nx][ny] == '#' || f_vis[nx][ny] != -1) continue;
//				if(f_vis[nx][ny]) continue; 
			

				f_vis[nx][ny] = f_vis[cur.X][cur.Y] + 1;
				Q1.push({ nx, ny });
			}
		}
//
		for(int i=0; i<n; i++) {
			for(int j=0; j <m; j++) {
				cout << f_vis[i][j] << ' ';
			}
			cout << '\n';
		}


		//왜 ||가 아니라 && 지????? 
		while (!Q2.empty() && escape == false) {
			auto cur = Q2.front();
			Q2.pop();

			for (int dir = 0; dir < 4; dir++) {
				int nx = cur.X + dx[dir];
				int ny = cur.Y + dy[dir];

				if (nx < 0 || ny < 0 || nx >= n || ny >= m) {
					cout << s_vis[cur.X][cur.Y] + 1 << '\n';
					escape = true;
					break;
				}
				if (board[nx][ny] == '#' || s_vis[nx][ny] != -1) continue;// || s_vis[nx][ny] >= 0) continue;
				if (s_vis[cur.X][cur.Y] + 1 >= f_vis[nx][ny] && f_vis[nx][ny] != -1) continue;
				//&&는 뭐냐면 불이 -1인경우는 그냥 가도되는거니까.. 그것까지
				//근데... 0이아니고!였어 왜지?ㅜㅜㅜㅜㅜㅜㅜㅜㅜ fire부분다시하자 
				//0인곳은 불이 시작한곳이라서.. 
				 
				s_vis[nx][ny] = s_vis[cur.X][cur.Y] + 1;
				Q2.push({ nx, ny });
			}
		}
		
		for(int i=0; i < n; i++) {
			for(int j=0; j < m; j++) {
				cout << s_vis[i][j] << ' ';
			}
			cout << '\n';
		}
		
		if(!escape) cout << "IMPOSSIBLE" << '\n';
	}
}
