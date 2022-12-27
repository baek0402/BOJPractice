#include <stdio.h>

int func4(int N)
{
	//N������ �� �߿��� ���� ū 2�� �ŵ�������.. 
	int val=1;
	while(2 * val <= N) 
		val *= 2;
	//2�� n�������� 2�� �ѹ� �� ������ �� N���� Ŀ���� 
	//Ż���ϰԵǴ°Ŵ� �� �������� val�� return
	 
	return val;
	
	//O(logN)
}

int func3(int N)
{
	//������ ���� �ƴ����� Ȯ���غ��¹�
	//fun3(9)==1, fun3(6)==0
	
	//�� N������? 
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
