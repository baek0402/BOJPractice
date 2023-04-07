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

void func(int k, int x, int y) {
	if(k == 7) {
		if(cnt_S >= 4) total++;
		
		return;
	}
	Q.push({x, y});
	while(!Q.empty()) {		
		auto cur = Q.front(); Q.pop();	
		cout << cur.X << '\n';
			
		for(int dir=0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
					
			if(nx < 0 || nx >= wid || ny < 0 || ny >= wid) continue;
			if(vis[nx][ny] != 0) continue;
					
			if(board[nx][ny] == 'S') cnt_S++;
					
			cnt_T++;
			vis[nx][ny] = 1;
			Q.push({nx, ny});
			
			func(k+1, nx, ny);
		}
	}
}


int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	for(int i = 0; i < wid; i++)
		cin >> board[i];

	func(1, 0, 0);

	cout << total;
}
