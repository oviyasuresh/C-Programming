#include <stdio.h>

int main(void) 
{
	int arr[10],i,n;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("\n enter the array elments:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		printf("\n%d %d",arr[i],i);
	}
	return 0;
}
