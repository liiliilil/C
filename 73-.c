#include <stdio.h>

int B (int *,int );

int main()
{
	int arr[1000000];
	int n=0;
	
	while(scanf("%d",&arr[n])==1)
		n++;
	
	printf("%d",B(arr,n));
	
	return 0;
}

int B (int *arr, int size)
{
	int max = arr[0];
	
	for (int i=1; i<size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
