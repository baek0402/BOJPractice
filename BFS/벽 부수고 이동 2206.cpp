#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int dist[1005][1005];
string board[1005];

int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, -1, 1, 0};

int main(void) {
	int n, m;
	cin >> n >> m;
	
	for(int i = 0; i < n; i++) {
		cin >> board[i];
		fill(dist[i], dist[i]+m, -1);
	}
	
	queue<pair<int, int>> Q;
	Q.push({0, 0});
	dist[0][0] = 0;
	
	int wall=0; 
	//시작을 for문으로 할지 아니면 while(!Q.empty())로 할지도..	
	while(!Q.empty()) {
		auto cur = Q.front();
		Q.pop();
		
		for(int dir=0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			
			if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if(dist[nx][ny] >= 0) continue; 
			if(wall >= 1 && board[nx][ny] == '1') {
				
				continue; //이건 또 벽을 만난거야.. 
			}
			
			if(board[nx][ny] == '1') {
				if(!wall) //처음으로 벽을 만난거면
					wall++; //벽 한번 부쉈읍니다.
				else {
					wall = 0;
				}
					
			}
			
			dist[nx][ny] = dist[cur.X][cur.Y] + 1;
			Q.push({nx, ny});
		}
	}
	
	for(int i=0; i < n; i++) {
		for(int j=0; j < m; j++)
			cout << dist[i][j] << ' ';
		cout << '\n';
	}
	cout << wall << '\n';
	cout << dist[n-1][m-1] + 1;
	
}
