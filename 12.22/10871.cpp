#include <stdio.h>

int main(void)
{
	int n, x, a;
    
	scanf("%d %d", &n, &x);	
	for(int i=0; i < n; i++)
	{
        scanf("%d", &a);
        if(a < x) printf("%d ", a);
    }
	/*
	int a, x, b[1005];
	
	scanf("%d %d", &a, &x);
	
	for(int i=0; i < a; i++)
	{
		printf("%d ", i);
		scanf("%d", &b[i]);
		if(b[i] < x) printf("%d ", b[i]);
	}
	*/
}
