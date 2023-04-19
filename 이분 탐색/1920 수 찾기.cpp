#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[100005];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;
	for(int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr+n); //
	
	cin >> m;
	while(m--) {
		int target;
		cin >> target;
		
		int st = 0;
		int en = n-1; 
		int mid = 0;
		for(int i = 0; i < n; i++) {
			mid = (st + en)/2;
			
			if(arr[mid] > target) en = mid - 1;
			else if(arr[mid] < target) st = mid + 1;
			else {
				cout << arr[mid] << '\n';
				cout << "1\n";
				break;
			}
			
			if(en < st) {
				cout << "0\n";
				break;
			}
		}
	}
}
