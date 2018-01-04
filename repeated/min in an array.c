
#include <stdio.h>

int min(int array[50],int n);

int main(void) 

{

	int array[50];

	int i,result,n;

	printf("no of elements in the array");

	scanf("%d",&n);

	printf("\narray\n");

	for(i=0;i<n;i++)

	{

	scanf("%d",&array[i]);

	printf("%d ",array[i]);

	}

	result=min(array,n);

	printf("\n%d",result);

	return 0;

}

int min(int array[50],int n)

{

	int i,min=array[0];

	for(i=1;i<n;i++)

	{

	scanf("%d",&array[i]);

	if(array[i]<min)

	{

		min=array[i];

	}

	}

	return (min);

}	

