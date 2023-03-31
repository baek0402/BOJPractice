#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int m, n, k;
int board[102][102];
int vis[102][102];

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);

  	cin >> m >> n >> k;
  	
	while (k--) {
    	int x1, y1, x2, y2;
    	cin >> x1 >> y1 >> x2 >> y2;
    	
		for (int j = y1; j < y2; j++)
    		for (int k = x1; k < x2; k++)
    	    	board[j][k] = 1;
	}
	
	
	for (int j = 0; j < m; j++) {
    	for (int k = 0; k < n; k++)
        	cout << board[j][k] << ' ';
    	cout << '\n';
	}
}
  
