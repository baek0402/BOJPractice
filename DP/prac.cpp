#include <bits/stdc++.h>
using namespace std;

int d[1000005];
int pre[1000005]
int n;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;
	d[1] = 0;
	
	for(int i = 2; i <= n; i++) {
		d[i] = d[i-1] + 1;
		pre[i] = i-1; //
		
		if(i % 2 == 0) {
			if(d[i] > d[i/2] + 1) {
				pre[i] = i/2;
			}
		}
		if(i % 3 == 0) {
		}
		
		
		
	}
	
	
}


