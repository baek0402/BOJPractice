#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int dist[100005];
int n, k;

int main(void) {
	//1차원 배열인 거시다 
 
	cin >> n >> k;
	fill(dist, dist+100005, -1);
	dist[n] = 0;
	
	queue<int> Q;	
	Q.push(n);
	
	//탈출 조건은 k로 갔을때니까 dist[17]인거잖아..
	//즉 dist[k] 에 특정 값이 들어가면, 그때는 동생에게 도착한거니까
	//dist[k] == -1 일동안 while문 도는거라서 조건문이 그러함.. 
	while(dist[k] == -1) {
		int cur = Q.front(); Q.pop();
		
		//방향 도는 반복문 기억하기
		for(int nxt : {cur-1, cur+1, cur*2}) {
			if(nxt < 0 || nxt > 100000) continue;
			if(dist[nxt] != -1) continue;
			
			dist[nxt] = dist[cur]+1;
			Q.push(nxt);
		} 		
	}
	
	cout << dist[k];

}
