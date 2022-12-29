#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX], pre[MX], nxt[MX];
int unused = 1;

void insert(int addr, int num){
	dat[unused]=num; 
	pre[unused]=addr;//pre[addr];
	nxt[unused]=nxt[addr];
	/*추가안한부분*/
	if(nxt[addr] != -1) //-1인경우는 최초인경우! 이게 pre[1]의 0->2 
		pre[nxt[addr]] = unused;
	/**************/ 
	nxt[addr]=unused;	//이게 nxt[0]의 1->2 
	unused += 1;

	/* insert(0, 30), unused=2
	     0   	 1      2
	dat -1		10     30 
	pre -1   	 0(2)   0
	nxt  1(2)   -1      1
	*/
}

void erase(int addr){
	nxt[pre[addr]]=nxt[addr];
	if(nxt[addr] != -1) pre[nxt[addr]]=pre[addr];

	/*
	     0   	 1      2
	dat -1		30     40 
	pre -1   	 0(2)   0
	nxt  1(2)   -1      1
	*/

}

void traverse(){
  int cur = nxt[0];
  while(cur != -1){
    cout << dat[cur] << ' ';
    cur = nxt[cur];
  }
  cout << "\n\n";
}

void insert_test(){
  cout << "****** insert_test *****\n";
  insert(0, 10); // 10(address=1)
  traverse();
  insert(0, 30); // 30(address=2) 10
  traverse();
  insert(2, 40); // 30 40(address=3) 10
  traverse();
  insert(1, 20); // 30 40 10 20(address=4)
  traverse();
  insert(4, 70); // 30 40 10 20 70(address=5)
  traverse();
}

void erase_test(){
  cout << "****** erase_test *****\n";
  erase(1); // 30 40 20 70
  traverse();
  erase(2); // 40 20 70
  traverse();
  erase(4); // 40 70
  traverse();
  erase(5); // 40
  traverse();
}

int main(void) {
  fill(pre, pre+MX, -1);
  fill(nxt, nxt+MX, -1);
  insert_test();
  erase_test();
}
