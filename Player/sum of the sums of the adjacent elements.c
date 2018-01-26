#include <stdio.h>

int main(void) 
{
	int n;
	scanf("%d",&n);
	int a[n],i,sum,result=0;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		sum=a[i]+a[i+1];
		result=result+sum;
		
	}
	printf("%d",result);
	return 0;
}
