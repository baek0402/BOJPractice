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
	
	//110110 �̷��� ���� ���̴ϱ�
	//string �迭,,?!?!?! ���׷��Թ���,,, 
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
			//���� ������ �̾����־ 0,0���� �������̱���.
			
			while(!Q.empty()) {
				pair<int, int> cur = Q.front(); //(0, 0)
				Q.pop();
				
				for(int dir=0; dir < 4; dir++) {
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir];
					
					if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
					//if(board[nx][ny] != 1 || dis[nx][ny] != -1) continue;
					//1. board�� string ���� 
					if(board[nx][ny] != '1' || dis[nx][ny] != -1) continue;
					
					//dis[nx][ny] += 1; //�׳� �̷����ϸ� -1 + 1�� �Ǵϱ�, 0,0��
					dis[nx][ny] = dis[cur.X][cur.Y]+1;
					Q.push({nx, ny});
				}
			}
		}
	}
	//cout << dis[n][m]; ����Ҷ� �迭�̴� -1���������..
	cout << dis[n-1][m-1]; 
}
