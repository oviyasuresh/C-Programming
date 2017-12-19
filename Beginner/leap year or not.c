#include <stdio.h>
int main(void) 
{
	int year;
	printf("enter the year:");
	scanf("%d",&year);
	if(year%400==0)
	printf("\n leap year");
	else if(year%100==0)
	printf("\n not a leap year");
	else if(year%4==0)
	printf("\n leap year");
	else
	printf("\n not a leap year");
	return 0;
}
