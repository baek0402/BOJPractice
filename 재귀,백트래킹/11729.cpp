#include <bits/stdc++.h>
using namespace std;

void hanoi(int a, int b, int n)
{
	// 1. n-1���� a���� 6-a-b���� �ű��
	// 2. n��°�� a���� b�� �ű�� 
	// 3. n-1���� b�� �ű�� 
	
	//base condition
	if(n == 1) 
	
	//1.
	hanoi(a, 6-a-b, n);
	cout 
}

int main(void)
{
	int k;
	cin >> k; //k���� ������ �׿��ִٿ� 
	
	//���� n���� a�� ��տ��� b�� ������� �ű�� 
	hanoi(1, 3, k); // (a, 6-a-b, b)
}
