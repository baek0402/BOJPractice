#include <bits/stdc++.h> 
using namespace std;

int d[20];
int n, m;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;
	
	d[1] = 1; d[2] = 2; d[3] = 4;
	for(int i=4; i < 11; i++)
		d[i] = d[i-1] + d[i-2] + d[i-3];
	//d[1]~d[11]까지의 합 알 수 있음
	
	while(n--) {
		cin >> m;
		
		cout << d[m] << '\n';
	}	 
	
}
