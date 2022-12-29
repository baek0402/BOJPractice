#include <bits/stdc++.h>
using namespace std;

const int MX = 100005;
char dat[MX];
int pre[MX], nxt[MX];
int unused=1;

void insert(int addr, int num)
{
	// 먼저 데이터를 넣고, 이후에 주소를 바꿔주기	
	dat[unused]=num;
	pre[unused]=addr;//pre[addr];
	nxt[unused]=nxt[addr];
	if(nxt[addr] != -1) pre[nxt[addr]]=unused;
	nxt[addr]=unused;
	unused++;
}

void erase(int addr)
{
	nxt[pre[addr]]=nxt[addr];
	if(nxt[addr] != -1) pre[nxt[addr]]=pre[addr]; 
}

void traversal()
{
	int cur = nxt[0];
	while(cur != -1) {
		cout << dat[cur] << ' ';
		cur = nxt[cur];
	}
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
		
	fill(pre, pre+MX, -1);
	fill(nxt, nxt+MX, -1);

	//char n[100005];
	string s; 	
	cin >> s;
	
	int cursor=0;
	for(int i=0; i < s.length(); i++)
	{
		insert(cursor, s[i]);
		cursor++;
		//각각의 문자열마다 커서(주소) 넣어주는 거임.. 
	}
	/*
	for(auto c : s)
	{
		insert(cursor, c);
		cursor++;
	}*/

	int m;
	cin >> m;
	
	while(m>0)//while(m >= 0)
	{
		char type;
		cin >> type;
		if(type == 'P')
		{
			char data;
			cin >> data;
			insert(cursor, data);
			//이때 커서는 추가된 데이터와 기존 데이터 그 사이에 존재함 
			cursor=nxt[cursor]; //그렇기에 이 작업이 필요해 
//			cout << "cursor : " << cursor << '\n';
		}
		else if(type = 'L')
		{
			//if(cursor != 0) cursor--; 이건내가그냥막짠코드
			if(pre[cursor] != -1) cursor = pre[cursor]; 
		}
		else if(type == 'D')
		{
			//if(cursor != s.length()-1) cursor++;
			if(nxt[cursor] != -1) cursor = nxt[cursor];
		}
		else if(type == 'B')
		{
			/*erase(cursor);
			cursor = pre[cursor];*/
			if(pre[cursor] != -1) {
				erase(cursor);
				cursor = pre[cursor];
			}
		}
		m--;
	}
	
	traversal();
}
