#include <stdio.h>

int main(void) 
{
	int n,k,array[50],i,j,temp;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d ",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(array[i]>array[j])
		{
			temp=array[i];
			array[i]=array[j];
			array[j]=temp;
		}
		}
	}
	printf("%d",array[k-1]);
	
	return 0;
}
