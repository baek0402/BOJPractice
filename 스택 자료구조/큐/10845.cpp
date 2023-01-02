#include <bits/stdc++.h>
using namespace std;

const int MX = 10005;
int dat[MX];
int head = 0, tail = 0;

void push(int x) {
	dat[tail++] = x;
}

void pop() {
	head++;
}

int front() {
	return dat[head];
}

int back() {
	//return dat[--tail];
	return dat[tail-1];
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N;
	cin >> N;
	
	while(N--) {
		string cmd;
		cin >> cmd;
		if(cmd=="push") {
			int val;
			cin >> val;
			push(val);
		}
		else if(cmd=="pop") {
			if(tail==head) //if(tail == 0) 
				cout << -1 << '\n';
			else {
				cout << front() << '\n';
				pop();
			}
		}
		else if(cmd=="size") {
			//size!!!!!!!!!!!!!! tail이 아니라 tail-head 
			cout << tail-head << '\n';
		}
		else if(cmd=="empty") {
			if(tail==head) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		else if(cmd=="front") {
			if(tail==head) cout << -1 << '\n';
			else cout << front() << '\n';
		}
		else {
			if(tail==head) cout << -1 << '\n';
			else cout << back() << '\n';

		}
	}
	
	
}
