#include <stdio.h>

int main(void) 
{
	int n,k;
	scanf("%d %d",&n,&k);
	int a[n],i,count=0,flag=0;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			flag=1;
			count=count+1;
		}
	}
	if(flag==1)
	{
		printf("yes %d",count);
	}
	else if(flag==0)
	{
		printf("no");
	}
	return 0;
}
