#include <bits/stdc++.h>
using namespace std;

int n;
int d[305], s[305];
int total = 0;
 
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;
	for(int i=1; i <= n; i++) {
		cin >> s[i];
		total += s[i];
	}
	
	/* 답지보고 추가한부분 */
	if(n <= 2) {
		cout << total;
		return 0;
	} 
	//이경우도 고려해주기 
	
	
	d[1] = s[1];
	d[2] = s[2];
	d[3] = s[3]; //최대한 많이 밟고 s[3] 하나만 안 밟는게 젤 적은값이징 
	
	for(int i=4; i < n; i++) {
		d[i] = s[i] + min(d[i-2], d[i-3]);
		//현재 밟지않을 계단과 밟지않은 k-2, k-3 중에서 더 작은값  
	}
	//그럼 여기까지가 이제 최종 전 단계까지 밟지 않은 최소값이니까
	//전체합에서 여기까지 값 빼면 돼.. (?)
	
	/*int total = 0;
	for(int i=1; i <= n; i++) 
		total = total + d[i];
		//이게 아니라 계단의 합이지.. 저리가 
	*/	
	//아!!!!!!!!!!!!!1 최종거 전에 더 작은애로 보여줘야지 
	cout << total - min(d[n-1], d[n-2]);
}
