#include <bits/stdc++.h>
using namespace std;

string board[10][10];
/*
	YYYYY
	SYSYS
	YYYYY
	YSYYS
	YYYYY
*/

int main(void) {
	
	for(int i=0; i < 5; i++) {
		for(int j=0; j < 5; j++) {
			cin >> board[i][j];
		}
	}

	for(int i=0; i < 5; i++) {
		for(int j=0; j < 5; j++) {
			cout << board[i][j];
		}
	}

	
}
