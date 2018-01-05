#include <stdio.h>
int main(void) 
{
	int i,n,k,array[50],count=1;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		if(array[i]%2==1)
		{
			if(count==k)
			{
				printf("%d",array[i]);
			}
		count=count+1;
		}
	}
			
	return 0;
}
