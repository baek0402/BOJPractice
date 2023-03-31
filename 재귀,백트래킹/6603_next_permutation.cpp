#include <bits/stdc++.h>
using namespace std;

void func(int k) {
	
}

int main(void) {
	
	int n;
	int arr[20];
	
	while(1) {
		cin >> n;
		if(n == 0) break;
		
		for(int i = 0; i < n; i++)
			cin >> arr[i];
			
		do {
			for(int i = 0; i < n; i++)
				cout << arr[i] << ' ';
			cout << '\n';
		} while(next_permutation(arr, arr+n));
		
		// 7 1 2 3 4 5 6 7 
	}
}
