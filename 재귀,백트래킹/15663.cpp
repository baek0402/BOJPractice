#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];
int num[10];
bool isused[10];

//�ߺ��Ǵ� ������ �ȵȴ�.. 
void func(int k) {
	if(k == m) {
		for(int i=0; i < m; i++) cout << arr[i] << ' ';
		cout << '\n';
		return;
	}
	int tmp = 0; //����ٰ� �����ϴ� ������ �����غ��� 
	for(int i=0; i < n; i++) {
		if(!isused[i] && tmp != num[i]) {			
			arr[k] = num[i];
			isused[i] = 1;
			/* ���� ���� �־ Ȯ���ϴ� ����*/
			tmp = arr[k]; 
			/*
			* �� ���� 1,9 �� �߾� �׷��� return �� ���ָ�
			* for������ ���ݾ�! �׷� temp���� �̹� 9�� �ְ���
			* �׷��� �ɷ����� �׷�����! 
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
