#include <bits/stdc++.h>
using namespace std;

int alp[26];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string s;
	cin >> s;
	
	for(auto t : s) {
		alp[t-'a'] += 1;
	}
	
	for(int i=0; i < 26; i++)
		cout << alp[i] << ' ';
}
