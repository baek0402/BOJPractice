/*
#include <stdio.h>
#include <string.h>	
	
int main(void)
{
	char s[105];
	char a[26]={0}; //0으로 초기화 안해주면 죄다 쓰레기값이야 
	int cnt=0;
	
	// %c는 그냥 char형, %s는 char* 형 
	scanf("%s", s); //scanf 문자열일 경우는 그냥 이렇게 ! %s 
	
	for(int i = 0; i < strlen(s); i++) //strlen 문자열의 길이만큼.. 
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

