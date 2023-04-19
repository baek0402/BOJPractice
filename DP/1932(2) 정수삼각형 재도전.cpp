#include <bits/stdc++.h>
using namespace std;

int d[505][505];
int arr[505][505];
int n;
int total = 0;

void func(int t) {

	if(t > n) {
		cout << total << ' ';
		return;
	}
	
	total = 0;
	for(int i = t; i <= t; i++) {
		for(int j = 1; j <= i; j++) {
			d[i][j] = max(d[i-1][j], d[i-1][j-1]) + arr[i][j];
			
			total = max(total, d[i][j]);
		}
	}
	func(t+1);
	
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;
	
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= i; j++) {
			cin >> arr[i][j];
		}
	}
	
	d[1][1] = arr[1][1];
	
	if(n <= 1) {
		cout << d[1][1];
		return 0;	
	}
	
	func(2);
}
