#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = 0;

void push(int x) {
	dat[pos]=x;
	pos++;
	
	//dat[pos++]=x;
}

void pop() {
	//그냥 pos만 줄이고, 값은 안 바꿔도돼
	//push에 그 위치에 값이 어차피 덮어쓰이니까 
	pos--;	
}

int top() {
	return dat[pos-1];	
}

int test() {
	push(5); push(4); push(3);
	cout << top() << '\n'; // 3
  	pop(); pop();
  	cout << top() << '\n'; // 5
  	push(10); push(12);
  	cout << top() << '\n'; // 12
  	pop();
  	cout << top() << '\n'; // 10
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	test();	
}
