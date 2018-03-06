#include <stdio.h>

int main(void) 
{
	int n;
	scanf("%d",&n);
	int a[n],i,b[n],j=0,temp,count=0,k;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i==a[i])
		{
			b[j]=i;
			j++;
			count=count+1;
		}
	}
	if(count==0)
	{
		printf("-1");
	}
	else
	{
	for(j=0;j<count;j++)
	{
		for(k=j+1;k<count;k++)
		{
			if(b[j]>b[k])
			{
				temp=b[j];
				b[j]=b[k];
				b[k]=temp;
			}
		}
	}
	for(j=0;j<count;j++)
	{
		printf("%d ",b[j]);
	}
	}
	
	return 0;
}
