#include <stdio.h>

int main(void) 
{
	int n;
	scanf("%d",&n);
	int a[n],i,max=0,sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
			sum=sum+a[i];
		}
		else
		{
			sum=sum+a[i+1];
		}
	}
	printf("%d",sum);
	
	return 0;
}
