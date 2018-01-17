#include <stdio.h>

int main(void) 
{
	int n,k;
	scanf("%d %d",&n,&k);
	int array[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n-k;i++)
	{
		printf("%d ",array[i]);
	}
	return 0;
}
