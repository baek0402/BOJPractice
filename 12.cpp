#include <bits/stdc++.h>
using namespace std;

int board[10][10];

int main(void) {
	int n, m;
	cin >> n >> m;
	
	for(int i=0; i < n; i++) 
		for(int j=0; j < m; j++)
			cin >> board[i][j];
}
