#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
int board[502][502];
int v[502][502];
int n, m; //개수
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void)
{
	int num=0; // count of picture
	int area=0, mx=0;
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n >> m; // 6 5
	for(int i=0; i < n; i++)
		for(int j=0; j < m; j++)
			cin >> board[i][j];
			
	for(int i=0; i < n; i++) {
		for(int j=0; j < m; j++) {
			if(v[i][j] || board[i][j] == 0) continue;
			num++;
			queue<pair<int, int>> Q;
			v[i][j] = 1; 
			Q.push({i, j});
			
			area=0;
			while(!Q.empty()) {
				pair<int, int> cur = Q.front();
				Q.pop();
				area++;
				for(int dir=0; dir < 4; dir++) {
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir];
					
					//범위 체크
					if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue; 
					if(board[nx][ny] != 1 || v[nx][ny]) continue;
					Q.push({nx, ny});
					v[nx][ny] = 1;
				}
			}
			mx = max(mx, area);
		}
	}
	cout << num << '\n' << mx;			
}
