#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	//int n[7];
	int num;
	int min=105, rslt=0;

	for(int i=0; i < 7; i++) {
		cin >> num;// n[i];
		
		if(num%2 != 0) 
		{
			rslt += num;
			min = (min > num ? num : min);
		}
	}
	if(rslt==0) cout << "-1";
	else {
		cout << rslt << '\n';
		cout << min;		
	}
}
