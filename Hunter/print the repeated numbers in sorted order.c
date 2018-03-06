#include <stdio.h>

int main(void) 
{
	int n;
	scanf("%d",&n);
	int a[n],i,j,temp,temp1=0;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				if(a[i]!=temp1)
				printf("%d ",a[i]);
				temp1=a[i];
				break;
			}
		}
	}
	
	
	return 0;
}
