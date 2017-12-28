#include <stdio.h>
 
int main(void) 
{
	int num,even;
	printf("enter the number:");
	scanf("%d",&num);
	if(num%2==0)
	{
		even=num-2;	
	}
	else
	{
		even=num-1;
	}
	printf("\n%d",even);
	return 0;
}
