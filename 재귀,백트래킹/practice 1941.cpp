#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int wid = 5;

string board[10]; //5X5
bool vis[30][30];

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, 1, -1, 0};

int total = 0;
queue<pair<int, int>> Q;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	for(int i = 0; i < wid; i++)
		cin >> board[i];

	int cnt_T = 1;
	int cnt_S = 0;
	
	Q.push({0,0});

	while(!Q.empty()) {		
		auto cur = Q.front(); Q.pop();	
			
		for(int dir=0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
					
			if(nx < 0 || nx >= wid || ny < 0 || ny >= wid) continue;
			//if(vis[nx][ny] != 0) continue;
					
			if(board[nx][ny] == 'S') {
				cnt_S++;
				cout << "cnt_S : " << cnt_S << '\n';	
			}
					
			cnt_T++;
			//vis[nx][ny] = 1;
			Q.push({nx, ny});
			
			if(cnt_T >= 7) {
				//cout << "cntT : " << cnt_T << '\n';
				if(cnt_S >= 4) total++;
				
				cnt_T--;
				if(board[nx][ny] == 'S') cnt_S--;
				
				//vis[nx][ny] = 0;			
			}
		}
	}
	
	cout << total;
}
