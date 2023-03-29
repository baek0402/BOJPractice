#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];
int num[10];
bool isused[10];

//중복되는 수열이 안된대.. 
void func(int k) {
	if(k == m) {
		for(int i=0; i < m; i++) cout << arr[i] << ' ';
		cout << '\n';
		return;
	}
	int tmp = 0; //여기다가 정의하는 이유도 생각해보기 
	for(int i=0; i < n; i++) {
		if(!isused[i] && tmp != num[i]) {			
			arr[k] = num[i];
			isused[i] = 1;
			/* 이전 값을 넣어서 확인하는 과정*/
			tmp = arr[k]; 
			/*
			* 자 만약 1,9 를 했어 그러고 return 을 해주면
			* for문으로 가잖아! 그럼 temp에는 이미 9가 있겠지
			* 그래서 걸러내는 그런거임! 
			*/
			func(k+1);
			isused[i] = 0;
		}
	}
}
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for(int i=0; i < n; i++) cin >> num[i];
	sort(num, num+n);
	
	func(0);
}
