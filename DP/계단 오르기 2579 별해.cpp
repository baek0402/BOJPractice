#include <bits/stdc++.h>
using namespace std;

int n;
int d[305], s[305];
int total = 0;
 
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;
	for(int i=1; i <= n; i++) {
		cin >> s[i];
		total += s[i];
	}
	
	/* �������� �߰��Ѻκ� */
	if(n <= 2) {
		cout << total;
		return 0;
	} 
	//�̰�쵵 ������ֱ� 
	
	
	d[1] = s[1];
	d[2] = s[2];
	d[3] = s[3]; //�ִ��� ���� ��� s[3] �ϳ��� �� ��°� �� ��������¡ 
	
	for(int i=4; i < n; i++) {
		d[i] = s[i] + min(d[i-2], d[i-3]);
		//���� �������� ��ܰ� �������� k-2, k-3 �߿��� �� ������  
	}
	//�׷� ��������� ���� ���� �� �ܰ���� ���� ���� �ּҰ��̴ϱ�
	//��ü�տ��� ������� �� ���� ��.. (?)
	
	/*int total = 0;
	for(int i=1; i <= n; i++) 
		total = total + d[i];
		//�̰� �ƴ϶� ����� ������.. ������ 
	*/	
	//��!!!!!!!!!!!!!1 ������ ���� �� �����ַ� ��������� 
	cout << total - min(d[n-1], d[n-2]);
}
