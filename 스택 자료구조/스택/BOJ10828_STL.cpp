#include <bits/stdc++.h>
using namespace std;

const int MX = 100005;
int dat[MX];
int pos;// = 0;

int main(void)
{
	stack<int> S;
	int N;
	cin >> N;
	while(N--) {
		string cmd;
		//�߰��� ������ ��� ���� ��?
		//string or char? 
		cin >> cmd;
		
		if(cmd == "push")
		{
			int num;
			cin >> num;
			
			S.push(num);
		}
		else if(cmd == "pop")
		{
			if(S.empty()) cout << -1 << '\n';
			else {
				cout << S.top() << '\n';
				S.pop();				
			}
		}
		else if(cmd == "size")
		{
			cout << S.size() << '\n';
		}
		else if(cmd == "empty")
		{
			if(S.empty()) cout << 1 << '\n';
			else cout << 0 << '\n';
			/* stl empty�¿��� ��������� 1, �ƴϸ� 0 �̱⿡
			cout << (int)S.empty() << '\n'; �� ���൵ �� */ 
		}
		else //top
		{
			if(S.empty()) cout << -1 << '\n';
			else cout << S.top() << '\n';
		}
	}
}
