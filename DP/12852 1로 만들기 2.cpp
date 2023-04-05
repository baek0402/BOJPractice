#include <bits/stdc++.h>
using namespace std;

int n;
int d[1000005];
int pre[1000005];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;
	d[1] = 0;
	
	for(int i=2; i <= n; i++) {
		d[i] = d[i-1] + 1;
		pre[i] = i-1;
		
		if(i % 2 == 0 && d[i] > d[i/2]+1) {
			d[i] = d[i/2] + 1;
			pre[i] = i/2;
		}
		if(i % 3 == 0 && d[i] > d[i/3]+1) {
			d[i] = d[i/3] + 1;
			pre[i] = i/3;
		}
	}
	
	cout << d[n] << '\n';

	cout << n << ' ';
	int nxt = n;
	//10 9 3 1
	while(1) {
		cout << pre[nxt] << ' '; //9
		if(nxt == 1) break;
		nxt = pre[nxt];
	}
	
	//마지막부분
	/* 
	int nxt = n;
	cout << n << ' ';
	//10 9 3 1
	while(1) {
		cout << pre[nxt] << ' '; //9
		if(nxt == 1) break;
		nxt = pre[nxt];
	}
	이런식으로하면 시간초과인데.. 이게 왜지????? 
	*/

}
