#include <bits/stdc++.h>
using namespace std;
bool isUsed[10];
int arr[10];
int n, m;

void func(int k) {
	
	if(k == m) 
	{
		//arr��� 
		for(int i=0; i < m; i++)
			cout << arr[i];
		cout << '\n';
		return;	
	}
	
	for(int i=1; i <= n; i++) {
		if(!isUsed[i]) {
			arr[k] = i; 
			//arr[k]�� �Ǿ���� 
			//�ֳĸ�, arr[k]�� ������ ǥ���� ���ڸ� ��� �迭�̰� k�� ���������� �����̴ϱ��! 
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
