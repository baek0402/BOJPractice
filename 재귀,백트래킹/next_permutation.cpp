#include <bits/stdc++.h>
using namespace std;

int main(void) {
	
	//123 132 213 231 312 321
	int a[3] = {1, 2, 3};
	do {
		for(int i=0; i < 3; i++) 
			cout << a[i] << ' ';
		cout << '\n';
	} while(next_permutation(a, a+3));
	

	cout << "-----------------\n";

	// 12 13 14 23 24 34
	int b[4] = {0, 0, 1, 1};
	do {
		for(int i=0; i < 4; i++) {
			if(b[i] == 0)
				cout << i+1 << ' ';
		}
		cout << '\n';
	} while(next_permutation(b, b+4));
}
