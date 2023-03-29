#include <bits/stdc++.h>
using namespace std;

int n;
int cnt=0;
bool isused[40];
bool isused2[40];
bool isused3[40];

void func(int cur) {
	if(cur == n) {
		cnt++;
		return;
	}
	for(int i=0; i < n; i++) { // (cur, i)
		if(isused[i] || isused2[cur+i] || isused3[cur-i+n-1])
			continue;

		// Q의 현재자리 기준으로 방문 가능한곳들
		isused[i] = 1; // y축  
		isused2[i+cur] = 1; // 왼->오 대각선 
		isused3[cur-i+n-1] = 1; //오->왼 대각선 
		func(cur+1);
		isused[i] = 0; // y축  
		isused2[i+cur] = 0; // 왼->오 대각선 
		isused3[cur-i+n-1] = 0; //오->왼 대각선  
	}
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	func(0);
	cout << cnt;
} 
