#include <bits/stdc++.h>
using namespace std;

int board[100000];
int dist[100000];
int n, m;
//int dx[3]// ..... x+1, x-1, 2*x 를 어떻게.....

int main(void)
{
	queue<int> Q;
	cin >> n >> m;
	
	fill(dist, dist+100000, -1);
	dist[n] = 0;
	Q.push(n); // 5를 넣었고..
	
	/*
	while(!Q.empty()) {
		int cur = Q.front();
		Q.pop();
		
		// ..... x+1, x-1, 2*x 를 어떻게.....
		//for(int nxt : (cur-1, cur+1, cur*2) 헐 ㅠㅠㅠㅠ ㅁㅊ  
		for(int i=0; i < 3; i++) {
			int nx = cur - 1; // cur + 1 , cur * 2
			
			if(nx < 0 || nx >= 100000) continue;
			if(dist[nx] != -1) continue;
			
			if(board[cur] == m) {
				cout << dist[cur] + 1;
				return 0;
			} 
			//이게필요가없고 그냥 탈출하면,, 그거 출력하면돼  
			
			dist[nx] = dist[cur] + 1;
		}
	} */
	
	//17번째로 오면,, 동생 찾은거니까,, 그때 탈출 ㅜㅜ 시발  
	while(dist[m] == -1) {
		int cur = Q.front();
		Q.pop();
		
		for(int nxt : {cur-1, cur+1, cur*2}) {
			if(nxt < 0 || nxt > 100000) continue;
			if(dist[nxt] != -1) continue;
			
			dist[nxt] = dist[cur]+1;
			Q.push(nxt);
		}
	}
	cout << dist[m];
} 
