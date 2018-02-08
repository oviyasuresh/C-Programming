#include <stdio.h>

int main(void) 
{
	int n,i,x=1,flag=0;
	scanf("%d",&n);
	for(i=0;i<n/2;i++)
	{
		x=x*2;
		if(x==n)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("yes");
	}
	else if(flag==0)
	{
		printf("no");
	}
	return 0;
}
