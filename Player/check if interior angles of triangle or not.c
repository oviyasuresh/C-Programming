#include <stdio.h>

int main(void) 
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>180 || b>180 || c>180)
	{
		printf("no");
	}
	else
	{
		if(a+b+c==180)
		{
			printf("yes");
		}
		else
		{
			printf("no");
		}
	}
	return 0;
}
