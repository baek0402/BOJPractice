#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int head = 0, tail = 0;

void push(int x) {
	dat[tail++] = x;
}

void pop() {
	head++;	
}

int front() { //front°¡ Á© ¾Õ ¿ø¼Ò »©´Â°Å 
	return dat[head];
}

int back() {
	return dat[tail-1];
}

int test() {
	//...
}

int main(void)
{
	test();	
}
