#include <bits/stdc++.h>
using namespace std;

int number = 7;
int c[7];
vector<int> a[8];

void bfs(int start)
{
	queue<int> q;
	q.push(start);
	c[start]=true;
	
	while(!q.empty()) {
		//큐 안에 있는 값을 빼면서, 걔와 인접한 애들 
		int x = q.front();
		q.pop(); //queue니까 어차피 FO 입니당.
		//인접한 애들 보는거야
		cout << x << ' ';
		for(int i = 0; i < a[x].size(); i++) {
			int y = a[x][i];
			if(!c[y]) { //방문 안했으면 
				q.push(y);
				c[y]=true; //큐에 넣으면서 방문처리! 
			}
		}		 
	}
}

int main(void)
{
	a[1].push_back(2);
	a[2].push_back(1);
	a[1].push_back(3);
	a[3].push_back(1);
	
	a[2].push_back(3);
	a[3].push_back(2);
	
	a[2].push_back(4);
	a[4].push_back(2);
	a[2].push_back(5);
	a[5].push_back(2);
	
	a[3].push_back(6);
	a[6].push_back(3);
	a[3].push_back(7);
	a[7].push_back(3);
	
	a[4].push_back(5);
	a[5].push_back(4);
	
	a[6].push_back(7);
	a[7].push_back(6);
	
	bfs(1);
}
