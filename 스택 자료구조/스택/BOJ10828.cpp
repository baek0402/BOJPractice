#include <bits/stdc++.h>
using namespace std;

const int MX = 100005;
int dat[MX];
int pos;// = 0;

void push(int x)
{
	dat[pos++] = x;
}

void pop()
{
	/* �̷��� �� ��� pos�� ������ �� �� ������,, �̿� ���� ó���� ���ֱ�*/ 
	/*pos--;
	if(pos < 0) {
		pos = 0;
		cout << -1 << '\n';	
	}
	else cout << dat[pos] << '\n';
	*/
	
	//more best
	if(pos == 0) cout << -1 << '\n';
	else { 
		cout << dat[pos-1] << '\n';
		pos--;	
	}
}

void top() {
	if(pos == 0) cout << -1 << '\n';
	else cout << dat[pos-1] << '\n';
}

int main(void)
{
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
			
			push(num);
		}
		else if(cmd == "pop")
		{
			pop();
		}
		else if(cmd == "size")
		{
			cout << pos << '\n';
			//??????????
		}
		else if(cmd == "empty")
		{
			if(pos == 0) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		else //top
		{
			top();
		}
	}
}
