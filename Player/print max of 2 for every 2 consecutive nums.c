#include <stdio.h>

int main(void) 
{
	int n;
	scanf("%d",&n);
	int array[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&array[i]);
	}
	for(i=0;i<n-1;i++)
	{
		if(array[i]>array[i+1])
		{
			printf("%d ",array[i]);
		}
		else
		{
			printf("%d ",array[i+1]);
		}
	}
	return 0;
}
