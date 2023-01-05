#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
int board[1005][1005];
int dist[1005][1005];
int n,m;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void)
{
	queue<pair<int, int>> q;
	cin >> m >> n;
	for(int i=0; i < n; i++) {
		for(int j=0; j < m; j++) {
			cin >> board[i][j];
			if(board[i][j] == 1) 
				q.push({i, j});
			if(board[i][j] == 0)
				dist[i][j] = -1;
		}
	}

	while(!q.empty())
	{
		//dist[0][0] = 0;
		
		pair<int, int> cur = q.front();
		//auto cur = Q.front();
		q.pop();
		
		for(int dir=0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			
			if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
			if(board[nx][ny] != 0 || dist[nx][ny] != -1) continue;
			
			dist[nx][ny] = dist[cur.X][cur.Y] + 1;
			q.push({nx, ny});	
		}
	}
	int mx = 0;
	bool err = false;
	for(int i=0; i < n; i++) {
		for(int j=0; j < m; j++) {
			if(dist[i][j]==-1) { //여긴 방문못한곳이니, 결국 다 못채워진거임
				err = true;
				break;
				//여기서 출력후 return 0; 을 해줘도 돼 
			}
			mx = max(mx, dist[i][j]); 
		}
	}
	//그럼 이제 거리의 최대값들 구해야하ㅡ는데,,,, 이걸어캐알어?
	if(err) cout << -1;
	else cout << mx;
}
