#include <bits/stdc++.h>
using namespace std;

int n;
int arr[1005][1005];
int d[1005][1005];
int total = 0;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;
	for(int i=0; i < n; i++) {
		for(int j=0; j < 3; j++) {
			cin >> arr[i][j];			
		}
	}
	
	d[0][0] = arr[0][0]; //26
	d[0][1] = arr[0][1]; //40
	d[0][2] = arr[0][2]; //83
	
	int mini = 1005;
	for(int i=1; i < n; i++) {

		d[i][0] = min(d[i-1][1], d[i-1][2]) + arr[i][0]; //R
		d[i][1] = min(d[i-1][0], d[i-1][2]) + arr[i][1]; //G
		d[i][2] = min(d[i-1][0], d[i-1][1]) + arr[i][2]; //B

		//d[i][k]가 여태까지의 가장 작은 합을 계속 구해오는거자나
		//근데 세가지의 경우가 있는거고
		//그래서 그 셋중에서 합이 가장 작은애를 골라야함		
		mini = min(d[i][0], d[i][1]);
		mini = min(mini, d[i][2]);
	}
	
	cout << mini;

	/* 또는 이렇게 표시하기
	cout << min({d[n][0], d[n][1], d[n][2]});
	cout << *min_element(d[n], d[n]+3); 

}
