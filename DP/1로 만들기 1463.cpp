#include <bits/stdc++.h>
using namespace std;

int d[1000005];
int n;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;
	d[1] = 0;
	
	for(int i = 2; i <= n; i++) {
		d[i] = d[i-1]+1;
		if(i%2 == 0) d[i] = min(d[i], d[i/2]+1);
		if(i%3 == 0) d[i] = min(d[i], d[i/3]+1);
	}
	//그냥 세가지의 경우를 하나의 for문에 두면서 세개중 가장 작은애를
	//순차적으로 고르는거구나...덜덜 
	
	cout << d[n];
}
