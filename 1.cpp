#include <bits/stdc++.h>
using namespace std;

int main(void)
{
/*	char c[5];
	char -> strlen.. 인데 null까지 포함되는거고
	그냥 문자열이면 string 하는게 나을듯
	 
	string s = "hello";
*/

//	string s;
//	cin >> s;
	//cout << s[2];
	//cout << s.length();

	vector<int> v1(5);
	int num[5] = {1, 2, 3, 4, 5};
	for(auto s : num)
		cout << s << ' '; 
		
	v1.pop_back();
	//v1.pop_front();
	//v1.push_front(6);
	v1.push_back(6);

	cout << v1[6] << ' ';
}
