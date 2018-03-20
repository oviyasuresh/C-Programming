#include <stdio.h>

int main(void)
{
	int n,m;
	scanf("%d %d",&n,&m);
	int a[n],b[n],i,j,flag=0;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(j=0;j<m;j++)
	{
		scanf("%d ",&b[j]);
	}
	for(j=0;j<m;j++)
	{
		for(i=0;i<n;i++)
		{
			if(b[j]==a[i])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			break;
		}
	}
	if(flag==1)
	{
		printf("YES");
	}
	if(flag==0)
	{
		printf("NO");
	}
	return 0;
}
