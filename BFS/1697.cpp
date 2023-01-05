#include <bits/stdc++.h>
using namespace std;

int board[100000];
int dist[100000];
int n, m;
//int dx[3]// ..... x+1, x-1, 2*x �� ���.....

int main(void)
{
	queue<int> Q;
	cin >> n >> m;
	
	fill(dist, dist+100000, -1);
	dist[n] = 0;
	Q.push(n); // 5�� �־���..
	
	/*
	while(!Q.empty()) {
		int cur = Q.front();
		Q.pop();
		
		// ..... x+1, x-1, 2*x �� ���.....
		//for(int nxt : (cur-1, cur+1, cur*2) �� �ФФФ� ����  
		for(int i=0; i < 3; i++) {
			int nx = cur - 1; // cur + 1 , cur * 2
			
			if(nx < 0 || nx >= 100000) continue;
			if(dist[nx] != -1) continue;
			
			if(board[cur] == m) {
				cout << dist[cur] + 1;
				return 0;
			} 
			//�̰��ʿ䰡���� �׳� Ż���ϸ�,, �װ� ����ϸ��  
			
			dist[nx] = dist[cur] + 1;
		}
	} */
	
	//17��°�� ����,, ���� ã���Ŵϱ�,, �׶� Ż�� �̤� �ù�  
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
