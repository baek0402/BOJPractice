#include <bits/stdc++.h>
using namespace std;

int n;
int s[305];
int d[305][2];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> s[i]; //10, 20, 15, 25, 10, 20...		
	}
	
	/*여기서 중요한거! n==1인경우!*/
	if(n == 1) {
		cout << s[1];
		return 0;
	} 
	
	d[1][1] = s[1]; d[1][2] = 0;
	d[2][1] = s[2]; d[2][2] = s[1]+s[2];
	
	for(int i = 3; i <= n; i++) {
		d[i][1] = max(d[i-2][1], d[i-2][2]) + s[i];
		d[i][2] = d[i-1][1] + s[i];
	}
	
	cout << max(d[n][1], d[n][2]);
}
