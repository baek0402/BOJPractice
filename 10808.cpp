/*
#include <stdio.h>
#include <string.h>	
	
int main(void)
{
	char s[105];
	char a[26]={0}; //0���� �ʱ�ȭ �����ָ� �˴� �����Ⱚ�̾� 
	int cnt=0;
	
	// %c�� �׳� char��, %s�� char* �� 
	scanf("%s", s); //scanf ���ڿ��� ���� �׳� �̷��� ! %s 
	
	for(int i = 0; i < strlen(s); i++) //strlen ���ڿ��� ���̸�ŭ.. 
	{
		a[s[i]-'a']++;// += 1;
	}

	for(int i = 0; i < 26; i++)
		printf("%d ", a[i]);
}*/

/**************** C++ ****************/
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string s;
	cin >> s;

	for(char a='a'; a <= 'z'; a++) {
		int cnt=0;
		for(auto c : s)
			if(c == a) cnt++;	

		cout << cnt << ' ';
	}

}

	/*
		string s;
		cin >> s;
		for(char a = 'a'; a <= 'z'; a++) {
			int cnt = 0;
			for(auto c : s)
				if(a == c) cnt++;
			cout << cnt << ' ';
		}
	*/

