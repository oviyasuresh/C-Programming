#include <stdio.h>

int main(void) 
{
	int n;
	scanf("%d",&n);
	int a[n],b[n],i,j,k,flag,temp;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(j=0;j<n;j++)
	{
		scanf("%d ",&b[j]);
	}
	for(i=0;i<n;i++)
	{
		for(k=i+1;k<n;k++)
		{
			if(a[i]>a[k])
			{
				temp=a[i];
				a[i]=a[k];
				a[k]=temp;
			}
		}
	}
	for(j=0;j<n;j++)
	{
		for(k=j+1;k<n;k++)
		{
			if(b[j]>b[k])
			{
				temp=b[j];
				b[j]=b[k];
				b[k]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==b[j])
			{
				flag=1;
				break;
			}
			else
			{
				flag=0;
			}
		}
		if(flag==0)
		break;
	}
	if(flag==0)
	{
		printf("no");
	}
	if(flag==1)
	{
		printf("yes");
	}
	
	
	return 0;
}
