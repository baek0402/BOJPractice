#include <bits/stdc++.h>
using namespace std;

int d[45][45];

int n, m; 

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;
	d[0][0] = 1; d[0][1] = 0;
	d[1][0] = 0; d[1][1] = 1;
	
	for(int i = 2; i <= 40; i++) {
		d[i][0] = d[i-1][0] + d[i-2][0];
		d[i][1] = d[i-1][1] + d[i-2][1];		
	}
	
	while(n--) {
		cin >> m;
		
		cout << d[m][0] << ' ' << d[m][1] << '\n';
	}
}
