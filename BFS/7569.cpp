#include <bits/stdc++.h>
using namespace std;

int board[105][105][105];
int dist[105][105][105];
int dx[6] = { -1, 0, 1, 0, 0, 0 };
int dy[6] = { 0, 1, 0, -1, 0, 0 };
int dz[6] = { 0, 0, 0, 0, 1, -1 };
int n, m, h;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	queue<tuple<int, int, int>> Q;

	cin >> m >> n >> h;
	for (int z = 0; z < h; z++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> board[i][j][z];

				if (board[i][j][z] == 1) Q.push({ i, j, z });
				if (board[i][j][z] == 0) dist[i][j][z] = -1;
			}
		}
	}

	while (!Q.empty()) {
		auto cur = Q.front();
		Q.pop();
		int curX, curY, curZ;
		tie(curX, curY, curZ) = cur;

		for (int dir = 0; dir < 6; dir++) {
			int nx = curX + dx[dir];
			int ny = curY + dy[dir];
			int nz = curZ + dz[dir];

			if (nx < 0 || ny < 0 || nz < 0) continue;
			if (nx >= n || ny >= m || nz >= h) continue;
			if (dist[nx][ny][nz] >= 0) continue;

			dist[nx][ny][nz] = dist[curX][curY][curZ] + 1;
			Q.push({ nx, ny, nz });
		}
	}

	int days = 0;
	for (int z = 0; z < h; z++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (dist[i][j][z] == -1) {
					cout << "-1\n";
					return 0;
				}
				days = max(days, dist[i][j][z]);
			}
			cout << '\n';
		}
	}
	cout << days;


}
