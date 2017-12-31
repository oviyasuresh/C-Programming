#include <stdio.h>

int main(void) 
{
	float l,b,a;
	printf("enter the length and breadth values of the farm:");
	scanf("%f %f",&l,&b);
	a=l*b;
	printf("\n%0.5f",a);
	return 0;
}
