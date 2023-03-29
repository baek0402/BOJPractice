#include <bits/stdc++.h>
using namespace std;

int c;
int arr[15];
int num[15];
bool isused[15];

int num_size;

void func(int k) {
	if(k == 6) {
		for(int i=0; i < 6; i++) 
			cout << num[arr[i]] << ' ';
		cout << '\n';
		return;
	}
	int temp = 0;
	int st = 0;
	if(k != 0) st = arr[k-1];
	for(int i=st; i < c; i++) {
		if(!isused[i] || temp == num[i]) {
			arr[k] = i;
			isused[i] = 1;
			temp = num[arr[k]];
			func(k+1);
			isused[i] = 0;
		}
	}
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	while(1) {
		cin >> c;
		if(c == 0) break;
		
		for(int i=0; i < c; i++)
			cin >> num[i];
		
		func(0);
		cout << '\n';
		
		fill(arr, arr+15, 0);	
	}
}
