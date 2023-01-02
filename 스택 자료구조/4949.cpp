#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int err;

	while(1) {
		stack<int> st;
		string str;
		getline(cin, str);
		
		if(str == ".") break;

        for(auto s : str) {
			if(s == '(' || s == '[') { 
				st.push(s); 
			}
			else if(s == ')') {
				if(st.empty()) {
					err=1;
					break;
				} 
				else {
					if(st.top() == '(') {
						st.pop();
					}	
					else {
						err=1;
						break;
					}
				}
				
				/*
				if(st.empth() || st.top() != ')') {
					err=1;
					break;
				}
				st.pop();
				*/
			}
			else if(s == ']') {
				if(st.empth() || st.top() != '[') {
					err=1;
					break;
				}
				st.pop();
			}
		}

		if(!st.empty()) {
			cout << "no\n";	
		}
		else {
			if(err==1) cout << "no\n";
			else cout << "yes\n";
		}
		err=0;
	}
}
