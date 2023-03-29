#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
int board[1005][1005];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void)
{
	int count=0;
	int n, m;
	queue<pair<int, int>> Q;
	cin >> m >> n;
	
	for(int i=0; i < n; i++) {
		for(int j=0; j < m; j++) {
			cin >> board[i][j];
			
			if(board[i][j] == 1) //해당 값보다 낮으면 잠기니까 시작점
				Q.push({i, j}); 
		}
	}
	
	while(!Q.empty()) {
		auto cur = Q.front(); //FIFO 시작점 가리키기 
		Q.pop(); //시작점을 꺼내서 얘를 기준으로 돌기

		for(int dir=0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			
			if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if(board[nx][ny] !=0) continue;
			
			board[nx][ny] = board[cur.X][cur.Y] + 1;
			Q.push({nx, ny});
		}
	}
	
	cout << board[cur.X][cur.Y];
	
	
}

