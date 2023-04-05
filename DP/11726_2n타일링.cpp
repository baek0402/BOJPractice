#include <bits/stdc++.h>
using namespace std;

int n;
int d[1005], s[1005];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;
	d[1] = 1;
	d[2] = 2;
	
	if(n <= 2) {
		cout << d[n] % 10007;
		return 0;
	} 
	
	/*
	for(int i=3; i <= n; i++) {
		d[i] = d[i-1] + d[i-2];
	}
	
	cout << d[n] % 10007;
	*/
		
	/* 이렇게 되면 계산 중간에 int overflow가 생긴대...*/ 
	/* 그래서 이게 아니라 계산 중간중간에 넣어줘야한대 ㅜㅜ */ 

		
	for(int i=3; i <= n; i++) {
		d[i] = (d[i-1] + d[i-2]) % 10007;
	}
	
	cout << d[n];

}
