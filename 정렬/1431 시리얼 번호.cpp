#include <bits/stdc++.h>
using namespace std;

string arr[50];
int n;

bool cmp(string a, string b) {
	int suma = 0, sumb = 0;
		
	//1.
	if(a.size() != b.size()) return a.size() < b.size();
	
	//2.
	for(int i = 0; i < a.size(); i++) {
		if(isdigit(a[i])) suma += (a[i] - '0');
	}
	for(int i = 0; i < b.size(); i++) {
		if(isdigit(b[i])) sumb += (b[i] - '0');
	}
	if(suma != sumb) suma < sumb;
	
	//3.
	return a < b;

}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	
	sort(arr, arr+5, cmp);

	for(int i = 0; i < n; i++)
		cout << arr[i] << '\n';
}
