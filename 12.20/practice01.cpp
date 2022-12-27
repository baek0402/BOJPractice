#include <stdio.h>

int func4(int N)
{
	//N이하의 수 중에서 가장 큰 2의 거듭제곱수.. 
	int val=1;
	while(2 * val <= N) 
		val *= 2;
	//2의 n제곱에서 2를 한번 더 곱했을 때 N보다 커지면 
	//탈출하게되는거니 그 이전값인 val을 return
	 
	return val;
	
	//O(logN)
}

int func3(int N)
{
	//제곱수 인지 아닌지를 확인해보는법
	//fun3(9)==1, fun3(6)==0
	
	//왜 N까지지? 
	for(int i = 1; i <= N; i++)
	{
		if(i * i == N) return 1; 
	}
	return 0;
}

int func2(int arr[], int N)
{
	for(int i=0; i < N; i++)
	{
		for(int j=i+1; j < N; j++)
		{
			if(arr[i] + arr[j] == 100) return 1;
		}
	}
	return 0;
}

int main()
{
	int arr[3] = {1, 52, 48};
	int num=3;
	
	printf("%d\n", func2(arr, num));
	printf("%d\n", func3(9));
	printf("%d\n", func4(1024));
}
