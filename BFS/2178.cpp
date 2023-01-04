#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
//int board[205];//[205];
string board[105];
int dis[205][205];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
int n, m;

int main(void)
{
	cin >> n >> m;
	
	//110110 이렇게 띄어쓰기 없이니까
	//string 배열,,?!?!?! 뭐그렇게받음,,, 
	for(int i=0; i < n; i++) cin >> board[i];
	 
	for(int i=0; i < n; i++) {
		for(int j=0; j < m; j++) {
			dis[i][j]=-1;
		}
	}
	
	queue<pair<int, int>> Q;
	for(int i=0; i < n; i++) {
		for(int j=0; j < m; j++) {
			Q.push({i, j});
			dis[i][j]+=1;
			//여긴 무조건 이어져있어서 0,0만이 시작점이긴함.
			
			while(!Q.empty()) {
				pair<int, int> cur = Q.front(); //(0, 0)
				Q.pop();
				
				for(int dir=0; dir < 4; dir++) {
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir];
					
					if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
					//if(board[nx][ny] != 1 || dis[nx][ny] != -1) continue;
					//1. board는 string 형태 
					if(board[nx][ny] != '1' || dis[nx][ny] != -1) continue;
					
					//dis[nx][ny] += 1; //그냥 이렇게하면 -1 + 1만 되니까, 0,0의
					dis[nx][ny] = dis[cur.X][cur.Y]+1;
					Q.push({nx, ny});
				}
			}
		}
	}
	//cout << dis[n][m]; 출력할때 배열이니 -1씩해줘야지..
	cout << dis[n-1][m-1]; 
}
