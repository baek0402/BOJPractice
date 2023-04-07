#include <bits/stdc++.h>
using namespace std;

string alpha[20];
int arr[20];
bool isused[20];
string tmp[20];
int n, m;
int cnt1 = 0; //모음
int cnt2 = 0; //자음 

void func(int k) {
	if(k == n) {
		if(cnt1 == 0 || cnt2 <= 1) { //string형 비어있는경우..? 
			return;	
		}
		
		for(int i = 0; i < n; i++) cout << alpha[arr[i]];
		cout << '\n';
		
		return;
	}
	int st = 0;
	if(k != 0) st = arr[k-1];
	for(int i = st; i < m; i++) {
		if(!isused[i]) {
			if(alpha[i] == "a" || alpha[i] == "e" || alpha[i] == "i" || alpha[i] == "o" || alpha[i] == "u")
				cnt1++;
			else cnt2++;
			arr[k] = i;
			isused[i] = 1;
			func(k+1);
			isused[i] = 0;
			
			if(alpha[i] == "a" || alpha[i] == "e" || alpha[i] == "i" || alpha[i] == "o" || alpha[i] == "u")
				cnt1--;
			else cnt2--;
		}
	}
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n >> m;
	for(int i = 0; i < m; i++)
		cin >> alpha[i];
		
	sort(alpha, alpha + m);

	func(0);
}
