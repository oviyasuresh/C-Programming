#include <stdio.h>

int main(void) 
{
	int n,i,x;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			x=n/i;
			if(x%2==1)
			{
				printf("%d",i);
				break;
			}
		}
		
	}
	return 0;
}
