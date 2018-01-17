#include <stdio.h>

int main(void) 
{
	int n,k;
	scanf("%d %d",&n,&k);
	int array[n],i,j,count=1;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(array[i]==array[j])
			{
				count=count+1;
				if(count==k)
				{
					printf("%d",array[i]);
				}
			}
		}
	}
	
	return 0;
}
