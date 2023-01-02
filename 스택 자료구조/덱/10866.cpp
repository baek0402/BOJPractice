#include <bits/stdc++.h>
using namespace std;

const int MX = 10005;
int dat[2*MX+1];
int head = MX, tail = MX;

void push_front(int x) {
	dat[--head] = x;
}

void push_back(int x) {
	dat[tail++] = x;
}

void pop_front() {
	head++;
}

void pop_back() {
	tail--;
}

int front() {
	return dat[head];
}

int back() {
	return dat[tail-1];
}

int main(void) {
	int N;
	cin >> N;
		
	while(N--) {
		string cmd;
		cin >> cmd;
			
		if(cmd=="push_front") {
			int val;
			cin >> val;
			push_front(val);
		}
		else if(cmd=="push_back") {
			int val;
			cin >> val;
			push_back(val);
		}
		else if(cmd=="pop_front") {
			if(head==tail) cout << -1 << '\n';
			else {
				cout << front() << '\n';
				pop_front();
			}
		}
		else if(cmd=="pop_back") {
			if(head==tail) cout << -1 << '\n';
			else {
				cout << back() << '\n';
				pop_back();
			}
		}
		else if(cmd=="size") {
			cout << tail-head << '\n';
		}
		else if(cmd=="empty") {
			cout << (tail==head) << '\n';
		}
		else if(cmd=="front") {
			if(head==tail) cout << -1 << '\n';
			else {
				cout << front() << '\n';
			}
		}
		else {
			if(head==tail) cout << -1 << '\n';
			else {
				cout << back() << '\n';
			}
		}
	}	
}
