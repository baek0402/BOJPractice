#include <bits/stdc++.h> //��� ��� �������� 
using namespace std;
int main(void)
{
	int n, x, a[10005];
	cin >> n >> x;
	for(int i=0; i < n; i++) cin >> a[i];
	for(int i=0; i < n; i++)
	{
		if(a[i] < 5) cout << a[i] << " ";
	}
}
