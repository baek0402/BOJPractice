#include <bits/stdc++.h>
using namespace std;

//N부터 1까지 출력하는 함수 + 1부터 N까지의 합 
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
	
	func1(num); // N부터 1 
	
	// 1~N까지의 합 
	cout << func2(num) << ' ';
} 
