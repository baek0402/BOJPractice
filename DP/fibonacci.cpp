#include <bits/stdc++.h>
using namespace std;

int d[105];
int n;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;
	
	d[0] = 0;
	d[1] = 1;
	if(n <= 1) {
		cout << d[n];
		return 0;
	}
	
	for(int i = 2; i <= n; i++) {
		d[i] = d[i-1] + d[i-2];
	}
	
	cout << d[n];
}
