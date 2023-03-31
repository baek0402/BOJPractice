#include <bits/stdc++.h>
using namespace std;

int dist[1000005];
int n;
int cnt=0;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;
	fill(dist, dist+1000005, -1);
	dist[1] = 0;
	
	queue<int> Q;
	Q.push(1);
	
	while(dist[n] == -1) {
		int cur = Q.front(); Q.pop();

		for(int nxt : {cur*3, cur*2, cur+1}) {
			if(dist[nxt] >= 0 || nxt > n) continue;
			
			dist[nxt] = dist[cur] + 1;
			Q.push(nxt);
		}		
	}
	
	cout << dist[n];
}
