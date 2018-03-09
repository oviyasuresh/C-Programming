#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d",&n);
	int a[n],i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		int count=0;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count=count+1;
			}
		}
		if(count==0)
		{
			printf("%d",a[i]);
			break;
		}
	}
	return 0;
}
