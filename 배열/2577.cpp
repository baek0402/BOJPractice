#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int num[10]={0};
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;

	long long sum = 0;
	sum = a * b * c;
	
	while(1) {
		num[sum % 10]++;
		sum /= 10;		
		if(sum == 0) break;
	}

	for(int i=0; i < 10; i++)
		cout << num[i] << '\n';
}
