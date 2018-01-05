#include <stdio.h>
int main(void) 
{
	int i,n,k,array[50],temp;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(array[i]>array[i+1])
		{
			temp=array[i];
			array[i]=array[i+1];
			array[i+1]=temp;
		}
	}
	for(i=1;i<=n;i++)
	{
		if(i==k-1)
		{
			printf("%d",array[i]);
		}
	}
			
	return 0;
}
