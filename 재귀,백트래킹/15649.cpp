#include <bits/stdc++.h>
using namespace std;
bool isUsed[10];
int arr[10];
int n, m;

void func(int k) {
	
	if(k == m) 
	{
		//arr출력 
		for(int i=0; i < m; i++)
			cout << arr[i];
		cout << '\n';
		return;	
	}
	
	for(int i=1; i <= n; i++) {
		if(!isUsed[i]) {
			arr[k] = i; 
			//arr[k]가 되어야해 
			//왜냐면, arr[k]가 실제로 표시할 숫자를 담는 배열이고 k가 유동적으로 움직이니까는! 
			isUsed[i] = 1;
			func(k+1); //1
			isUsed[i] = 0;		
		}
	}
}

int main() {

	cin >> n >> m;
	func(0);
}
