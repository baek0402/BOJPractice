#include <bits/stdc++.h>
using namespace std;

//N���� 1���� ����ϴ� �Լ� + 1���� N������ �� 
void func1(int n) {
	if(n == 0) 
		return;

	cout << n << ' ';	
	func1(n-1); 
}

int func2(int n) {
	if(n == 0) return 0;
	return n+func2(n-1); 
}

int main(void) {
	int num;
	cin >> num;
	
	func1(num); // N���� 1 
	
	// 1~N������ �� 
	cout << func2(num) << ' ';
} 
