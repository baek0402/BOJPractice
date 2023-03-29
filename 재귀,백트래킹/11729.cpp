#include <bits/stdc++.h>
using namespace std;

void hanoi(int a, int b, int n)
{
	// 1. n-1개를 a에서 6-a-b번에 옮긴다
	// 2. n번째를 a에서 b로 옮긴다 
	// 3. n-1개를 b로 옮긴다 
	
	//base condition
	if(n == 1) 
	
	//1.
	hanoi(a, 6-a-b, n);
	cout 
}

int main(void)
{
	int k;
	cin >> k; //k개의 원판이 쌓여있다요 
	
	//원판 n개를 a번 기둥에서 b번 기둥으로 옮기기 
	hanoi(1, 3, k); // (a, 6-a-b, b)
}
