#include <stdio.h>
 
int main(void) 
{
	int num,temp,sum=0;
	printf("enter the number");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		temp=num%10;
		sum=sum+temp;
		num=num/10;
 
	}
	printf("\n%d",sum);
	return 0;
}
