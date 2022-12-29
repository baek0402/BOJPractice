#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	list<int> L = {1,2};
	list<int>::iterator t = L.begin();
	
	L.push_front(10);
	L.insert(t, 6);
	L.push_back(5);
	t++;
	cout << *t << ' ';
	t = L.erase(t);
	
	cout << *t << '\n';
	
	for(auto i : L) cout << i << ' ';
}
