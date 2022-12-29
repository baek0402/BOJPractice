#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N;
	cin >> N;
	
	int num[10] = {};
	while(N) {
		num[N % 10]++;
		N /= 10;
	}
	
	int ans = 1;
	for(int i = 0; i < 10; i++) {
		if(i == 6 || i == 9) continue;
		ans = max(ans, num[i]);
	}

	ans = max(ans, ((num[6]+num[9])+1)/2;
	cout << ans;
}
