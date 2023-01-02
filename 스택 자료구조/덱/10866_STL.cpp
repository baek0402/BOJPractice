#include <bits/stdc++.h>
using namespace std;

int main(void) {
	deque<int> D;
	int N;
	cin >> N;
		
	while(N--) {
		string cmd;
		cin >> cmd;
			
		if(cmd=="push_front") {
			int val;
			cin >> val;
			D.push_front(val);
		}
		else if(cmd=="push_back") {
			int val;
			cin >> val;
			D.push_back(val);
		}
		else if(cmd=="pop_front") {
			if(D.empty()) cout << -1 << '\n';
			else {
				cout << D.front() << '\n';
				D.pop_front();
			}
		}
		else if(cmd=="pop_back") {
			if(D.empty()) cout << -1 << '\n';
			else {
				cout << D.back() << '\n';
				D.pop_back();
			}
		}
		else if(cmd=="size") {
			cout << D.size() << '\n';
		}
		else if(cmd=="empty") {
			cout << (int)D.empty() << '\n';
		}
		else if(cmd=="front") {
			if(D.empty()) cout << -1 << '\n';
			else {
				cout << D.front() << '\n';
			}
		}
		else {
			if(D.empty()) cout << -1 << '\n';
			else {
				cout << D.back() << '\n';
			}
		}
	}	
}
