#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
int board[502][502];
int visit[502][502];
int n, m;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n>> m;
	stack<pair<int ,int>> S;
	S.push({0,0});
	visit[0][0] = 0;
	
	while(!S.empty()) {
		auto cur = S.top();
		S.pop(); 
		
		for(int dir=0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			
			if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
			if(board[nx][ny] != 1 || visit[nx][ny] == 1) continue;
			
			visit[nx][ny] = 1;
			S.push({nx, ny});
		}
	}
 } 
