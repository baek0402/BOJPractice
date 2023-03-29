#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];
int num[10];
bool isused[10];

void func(int k) {
	if(k == m) {
		for(int i=0; i < m; i++) 
			cout << num[arr[i]] << ' ';
		cout << '\n';
		return;
	}
	
	int temp = 0;
	int st = 0;
	if(k != 0) st = arr[k-1];
	for(int i=st; i < n; i++) {
		if(!isused[i] && temp != num[i]) { 
		//arr이 아닌 num인 이유는, num에는 다음에 넣을 값이 들어있으니
		//temp는 이전값이고! 이 둘을 비교
			arr[k] = i; //여기서는 num[i]가 아닌 i를 하는이유는
			//start point를 지정해줘야하기때문입니다.. 
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
	cin >> n >> m;
	for(int i=0; i < n; i++) cin >> num[i];
	sort(num, num+n);
	
	func(0);
}
