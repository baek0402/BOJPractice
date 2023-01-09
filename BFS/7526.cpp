#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
int board[305][305];
//bool vis[305][305];
int dist[305][305];
int t, n;
int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int x1, y1, x2, y2;
	
	cin >> t;
	while(t--) {
		queue<pair<int, int>> q;
		cin >> n;
		cin >> x1 >> y1;
		cin >> x2 >> y2;
	
		for(int i=0; i < n; i++) fill(dist[i], dist[i]+n, -1);
	
		dist[x1][y1]=0;
		q.push({x1, y1});
		
		while(dist[x2][y2] < 0) {
			auto cur = q.front();
			q.pop();
		
			for(int dir=0; dir < 8; dir++) {
				int nx = cur.X + dx[dir];
				int ny = cur.Y + dy[dir];
				
				if(nx < 0 || ny < 0 || nx >= n || ny >= n) continue;
				if(dist[nx][ny] >= 0) continue;
				
				dist[nx][ny] = dist[cur.X][cur.Y]+1;
				q.push({nx, ny});
			}
		}
		cout << dist[x2][y2] << '\n';
	}
}
