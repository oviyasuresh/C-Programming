#include <stdio.h>

int main(void) 
{
	int array[10];
	int n,i,j,temp;
	float median;
	printf("\n enter the array size:");
	scanf("%d",&n);
	printf("\n enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for (i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(array[i]>array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	if(n%2==0)
	{
		median=(array[n/2]+array[(n-1)/2])/2;
	}
	else
	{
		median=array[n/2];
	}
	printf("%f",median);
	return 0;
}
