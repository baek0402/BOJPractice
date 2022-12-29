#include <bits/stdc++.h>
using namespace std;

int func2(int arr[], int num)
{
	/* O(N2) */
	/*
	for(int i=0; i < num; i++) {
		for(int j=i+1; j < num; j++) {
			if(arr[i] + arr[j] == 100) return 1;
		}
	}
	return 0;
	*/
	
	/* O(N) */
	int occur[101] = {};
	for(int i = 0; i < num; i++) {
		if(occur[100-arr[i]]) return 1;

		occur[arr[i]]=1;
	}		
	return 0;
}
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	int arr[1005];
	
	cin >> n;
	for(int i=0; i < n; i++)
		cin >> arr[i];
	
	cout << func2(arr, n);
}
