#include <stdio.h>

int main(void)
{
	int i,num,fact=1;
	printf("enter the number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("\n%d",fact);
	return 0;
}
