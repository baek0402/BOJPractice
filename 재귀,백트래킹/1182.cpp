#include <bits/stdc++.h>
using namespace std;

int n, s;
int cnt = 0;
int arr[20];

void func(int k, int sum) {
	if(k == n) {
		if(sum == s) cnt++; //이 부분이 이해가안가 
		return;
	}
	func(k+1, sum);
	func(k+1, sum + arr[k]);	
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> s;
	for(int i = 0; i < n; i++) 
		cin >> arr[i];
	if(s == 0) cnt--;
	func(0, 0);
	cout << cnt;
	
}
