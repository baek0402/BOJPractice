#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long a, b, mid, temp;
	cin >> a >> b;

	if(a > b) 
	{
		temp = b;
		b = a;
		a = temp;
	}
	mid = b-a-1;	
	if(a == b) mid = 0;
			
	cout << mid << '\n';
	
	for(long long i=a+1; i<b; i++)
		cout << i << ' ';
}
