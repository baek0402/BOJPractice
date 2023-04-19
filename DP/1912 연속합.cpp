#include <bits/stdc++.h>
using namespace std;

int arr[100005];
int d[100005];
int n;
 
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int total = -1001;
	
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	
	for(int i = 1; i <= n; i++) {
		d[i] = max(d[i-1] + arr[i], arr[i]);
		
		total = max(total, d[i]);
	}
	
	cout << total;
}
