#include <bits/stdc++.h>
using namespace std;

int dist[1000005];
int f, s, g, u, d;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int cnt = 0;
	
	cin >> f >> s >> g >> u >> d;
	fill(dist, dist + 1000005, -1);
	
	queue<int> q;
	q.push(s);
	dist[s] = 0;
	
	while(!q.empty()) {
		int cur = q.front(); q.pop();
		
		for(int nxt : {cur+u, cur-d}) {
			if(nxt > f || nxt < 1) continue;
			if(dist[nxt] >= 0) continue;
			
			dist[nxt] = dist[cur] + 1;
			q.push(nxt);
		}		
	}
	
	if(dist[g] == -1) cout << "use the stairs";
	else cout << dist[g];
}

