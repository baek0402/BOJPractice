#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N, sum;
	int a[100005];
	int num[100005];//00]; -> �ϴ� �̰� 2000001 �̾�
	
	cin >> N;
	for(int i = 0; i < N; i++)
		cin >> a[i];
	cin >> sum;
	
	int d=0, data=0;
	for(int i = 0; i < N; i++) {
		if(sum > a[i]) {
			if(num[sum-a[i]]) {
				d++;	
			}
		}
		num[a[i]]=1;
	}
	
	cout << d;
}
