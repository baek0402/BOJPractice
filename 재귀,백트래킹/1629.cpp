#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll result = 1;
ll func(ll a, ll b, ll m) {
	if(b == 1) return a % m;
	result = func(a, b/2, m);

	result = result * result % m;	
	if(b % 2 == 0) return result;
	return result * a % m;
} 

int main(void) {

	ll a, b, c;
	cin >> a >> b >> c;
	
	cout << func(a, b, c);
}
