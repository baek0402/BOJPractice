#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
string board[1005];
int f_dist[1005][1005];
int j_dist[1005][1005];
int n, m;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void)
{
	queue<pair<int, int>> Q1;
	queue<pair<int, int>> Q2;
	
	cin >> n >> m;
	for(int i=0; i < n; i++) cin >> board[i];
	for(int i=0; i < n; i++) {
		fill(f_dist[i], f_dist[i]+m, -1);
		fill(j_dist[i], j_dist[i]+m, -1);
	}
	
	for(int i=0; i < n; i++) {
		for(int j=0; j < m; j++) {
			if(board[i][j] == 'F') {
				f_dist[i][j] = 0;
				Q1.push({i, j});
			}
			if(board[i][j] == 'J') {
				j_dist[i][j] = 0;
				Q2.push({i, j});
			}
		}
	}
	
	//fire
	while(!Q1.empty()) {
		//pair<int, int> cur =
		auto cur = Q1.front();
		Q1.pop();
		
		for(int dir=0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			
			if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if(board[nx][ny] == '#' || f_dist[nx][ny] != -1) continue;
			
			f_dist[nx][ny] = f_dist[cur.X][cur.Y]+1;
			Q1.push({nx, ny});
		}
	}
	
	while(!Q2.empty()) {
		auto cur = Q2.front();
		Q2.pop();
		
		for(int dir=0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			
			if(nx < 0 || ny < 0 || nx >= n || ny >= m) //escape
			{
				cout << j_dist[cur.X][cur.Y] + 1;
				return 0;
			}
			if(board[nx][ny] == '#' || j_dist[nx][ny] != -1) continue;
			if(j_dist[cur.X][cur.Y] + 1 >= f_dist[nx][ny] && f_dist[nx][ny] != -1) continue;
			//조건하나 더 추가해야해ㅐㅐㅐㅐㅐㅐㅐㅐㅐㅐ
			//fire이 -1인경우면, 그거는 그냥.. 거긴 불이 안온거니까,,
			//불길이 번져있는데, 지훈 도착시간보다 느리면 거긴 통과가능조 건
			 
			 
			j_dist[nx][ny] = j_dist[cur.X][cur.Y] + 1;
			Q2.push({nx, ny});
		}
	}
	cout << "IMPOSSIBLE";	
}
