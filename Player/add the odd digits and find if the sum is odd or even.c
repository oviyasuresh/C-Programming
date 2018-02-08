#include <stdio.h>

int main(void) 
{
	int num,rem,osum=0;
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		if(rem%2!=0)
		{
			osum=osum+rem;
		}
		num=num/10;
	}
	
	if(osum%2==0)
	{
		printf("E");
	}
	else
	{
		printf("O");
	}
	return 0;
}
