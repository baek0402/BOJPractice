#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int dist[100005];
int n, k;

int main(void) {
	//1���� �迭�� �Žô� 
 
	cin >> n >> k;
	fill(dist, dist+100005, -1);
	dist[n] = 0;
	
	queue<int> Q;	
	Q.push(n);
	
	//Ż�� ������ k�� �������ϱ� dist[17]�ΰ��ݾ�..
	//�� dist[k] �� Ư�� ���� ����, �׶��� �������� �����ѰŴϱ�
	//dist[k] == -1 �ϵ��� while�� ���°Ŷ� ���ǹ��� �׷���.. 
	while(dist[k] == -1) {
		int cur = Q.front(); Q.pop();
		
		//���� ���� �ݺ��� ����ϱ�
		for(int nxt : {cur-1, cur+1, cur*2}) {
			if(nxt < 0 || nxt > 100000) continue;
			if(dist[nxt] != -1) continue;
			
			dist[nxt] = dist[cur]+1;
			Q.push(nxt);
		} 		
	}
	
	cout << dist[k];

}
