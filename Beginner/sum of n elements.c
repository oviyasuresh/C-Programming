#include <stdio.h>

int main(void) 
{
	int n,array[50],i,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+array[i];	
	}
	printf("\n%d",sum);
	return 0;
}
