#include <stdio.h>

int main(void) 
{
	int n;
	scanf("%d",&n);
	int array[n],i,j,temp=0;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		int count=1;
	for(j=i+1;j<n;j++)
	{
		
		if(array[i]==array[j])
		{
			count=count+1;
		}
		if(array[i]!=array[j])
		{
			break;
		}
	}
		if(count>temp)
		{
			temp=count;
		}
	}
	printf("%d",temp);
	return 0;
}
