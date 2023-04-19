#include <bits/stdc++.h>
using namespace std;

int n;
long long arr[100005];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int cnt = 0;
	long long mxval = -(1ll << 62)-1;
	int mxcnt = 0; 
	
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr+n);

	for(int i = 0; i < n; i++) {
		if(i == 0 || arr[i] == arr[i-1]) {
			cnt++;
		}
		else {
			if(mxcnt < cnt) {
				mxcnt = cnt;
				mxval = arr[i-1];
			}
			cnt = 1;
		}
	}
	
	if(mxcnt < cnt) {
		
		mxval = arr[n-1];
	}
	
	cout << mxval;
}
