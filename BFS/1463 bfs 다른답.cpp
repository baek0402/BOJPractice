#include <bits/stdc++.h>
using namespace std;

int arr[1000005];
int dx[3] = {1,2,3};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; 
	cin >> n;
    arr[1] = 0;
    queue<int> Q;
    Q.push(1);
    while(!Q.empty()) {
        int cur = Q.front(); Q.pop();
        
        //종료 조건
        if(cur == n) {
            cout << arr[cur];
            return 0;
        }
        
        int nx;
        
        for(int dir=0;dir<3;dir++) {
        	
            //1칸 더하기
            if(dir == 0) {
                nx = cur + dx[0];
            }// x2 or x3
            else {
                nx = cur * dx[dir];
            }

            //범위 넘어가면 스킵
            if(nx > n) continue;
			
            //방문한적 없으면 연산횟수+1 저장
            if(arr[nx] == 0) {
                arr[nx] = arr[cur] + 1;
            }//방문한적 있으면 스킵
            else {
                continue;
            }

            Q.push(nx);
        }
    }
}
