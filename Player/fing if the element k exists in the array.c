#include <stdio.h>

int main(void)
{
	int n,k;
	scanf("%d %d",&n,&k);
	int array[n],i,flag=0;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		if(array[i]==k)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
