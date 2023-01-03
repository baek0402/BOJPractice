#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int x, y, num;
	cin >> x;
	cin >> y;
	vector<int> v[x];
	
	for(int i=0; i < x; i++)
	{
		for(int j=0; j < y; j++)
		{
			cin >> num;
			v[i].push_back(num);	
		}
	}
	
	//bfs(v[0][0]);
	queue<int> q;
	int start = v[0][0];
	
	q.push(start);
	while(!q.empty())
	{
//		int visit = q.front();
//		q.pop();
		for(int i=0; i < y; i++) {
						
		}
	}

}
