#include <bits/stdc++.h>
using namespace std;

int d[1005];
int a[1005];
int n;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;
	for(int i = 0; i < n; i++) 
		cin >> a[i];
	d[1] = a[1];
	
	int total = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < i; j++) {
			if(a[j] < a[i]) {
				d[i] = d[i-1] + a[i];
			}
		}
		total = max(total, d[i]);
	}
	
	cout << total;	
}
