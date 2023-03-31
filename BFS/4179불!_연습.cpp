#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
string board[1005];
int sang[1005][1005];
int fire[1005][1005];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int main(void) {
	bool suc;
	queue <pair<int, int>> Q1;
	queue <pair<int, int>> Q2;
	
	int n, m;
	cin >> n >> m;
	
	for(int i=0; i < n; i++) cin >> board[i];
	for(int i=0; i < n; i++) {
		fill(sang[i], sang[i] + m, -1);
		fill(fire[i], fire[i] + m, -1);
	}
	
	for(int i=0; i < n; i++) {
		for(int j=0; j < m; j++) {
			if(board[i][j] == 'J') {
				sang[i][j] = 0;
				Q1.push({i, j});				
			}
			if(board[i][j] == 'F') {
				fire[i][j] = 0;
				Q2.push({i, j});
			}
		}
	}
	
	//1. 불의 시간을 구하기 	
	while(!Q2.empty()) {
		auto cur = Q2.front();
		Q2.pop();
		
		for(int dir = 0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir]; // 1, 0 방향으로 먼저 가보겠지 
			
			if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue; //범위를 벗어난 경우
			if(board[nx][ny] == '#' || fire[nx][ny] != -1) continue; //벽이거나, 이미 방문한경우
			
			fire[nx][ny] = fire[cur.X][cur.Y] + 1;
			Q2.push({nx, ny}); 
		}
	}
	
	while(!Q1.empty()) {
		auto cur = Q1.front();
		Q1.pop();
		
		for(int dir=0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			
			if(nx < 0 || nx >= n || ny < 0 || ny >= m) {
				cout << sang[cur.X][cur.Y] + 1;
				suc=1;
				return 0; //아예 for문을 벗어나야 하니까 return을 해주 
			}
			if(board[nx][ny] == '#' || sang[nx][ny] != -1) continue;
			if(sang[cur.X][cur.Y]+1 >= fire[nx][ny] && fire[nx][ny] != -1) continue;

			sang[nx][ny] = sang[cur.X][cur.Y] + 1;
			Q1.push({nx, ny});
		}
	}

	if(!suc) cout << "IMPOSSIBLE";	
	
	//현재이렇게 하면 즉시탈출의 경우가 고려되지 않은거래
	/*
	3 3
	.JF
	...
	... 
	*/
}
