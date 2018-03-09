#include <stdio.h>

int main(void) 
{
	int n;
	scanf("%d",&n);
	int a[n],i,sum=0,count=0,b[n],j,c;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		c=a[i];
		c=c-1;
		b[j]=c;
		j++;
		count++;
				
	}
	for(j=0;j<count;j++)
	{
		sum=sum+b[j];	
	}
	printf("%d",sum);
	
	return 0;
}
