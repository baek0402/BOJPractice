#include <bits/stdc++.h>
#define max(x, y) ((x) > (y) ? (x) : (y))
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int a, b, c, d;
	cin >> a >> b >> c;
	
	if(a==b)
	{
		if(b==c) cout << 10000+a*1000;
		else cout << 1000+a*100;
	}
	else
	{
		if(b==c) cout << 1000+b*100;
		else if(a==c) cout << 1000+a*100;
		else 
		{
			d = max(max(a,b),c);
			cout << d*100;
		}
	}
}

/*
ios::sync_with_stdio(0);
cin.tie(0);
*/
