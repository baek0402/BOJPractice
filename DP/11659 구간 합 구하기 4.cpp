#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[100005];
int d[100005];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n >> m;
	d[0] = 0;
	for(int i = 1; i <= n; i++) {
		cin >> arr[i];
		d[i] = d[i-1] + arr[i];
	}
	
	while(m--) {
		int i, j;
		cin >> i >> j;
		
		cout << d[j] - d[i-1] << '\n';
	}

}
