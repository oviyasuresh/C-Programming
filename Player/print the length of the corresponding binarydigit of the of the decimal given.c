#include <stdio.h>

int main(void) 
{
	int num,rem,a[30],i,count=0;
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%2;
		a[i]=rem;
		i++;
		count++;
		num=num/2;
	}
	printf("%d",count);
	return 0;
}
