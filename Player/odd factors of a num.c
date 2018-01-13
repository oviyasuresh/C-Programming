#include <stdio.h>

int main(void) 
{
	int i,num;
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(i%2==1 && num%i==0)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
