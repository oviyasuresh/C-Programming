#include <stdio.h>

int main(void) 
{
	int n,k;
	scanf("%d %d",&n,&k);
	int a[n],i,j,flag=0;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==k)
			{
				flag=1;
				printf("yes");
				break;
			}
		}
	}
	if(flag==0)
	{
		printf("no");
	}
	return 0;
}
