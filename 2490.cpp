#include <bits/stdc++.h>
using namespace std;

char y[] = "DCBAE";
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	for(int i=0; i < 3; i++)
	{
		int a[4], rslt=0;
		for(int j=0; j < 4; j++)
		{
			cin >> a[j];
			rslt += a[j];
		}
		cout << y[rslt] << '\n';
	}
}
