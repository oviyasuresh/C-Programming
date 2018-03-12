#include <stdio.h>

int main(void)
{
	int n,sum=0;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			sum=sum+a[i];
		}
	}
	printf("%d",sum);
	return 0;
}
