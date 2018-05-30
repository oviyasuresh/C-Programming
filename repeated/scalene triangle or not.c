#include <stdio.h>

int main(void) 
{
	int a1,b1,c1;
	scanf("%d %d %d",&a1,&b1,&c1);
	if(a1+b1>c1)
	{
		if(a1+c1>b1)
		{
			if(b1+c1>a1)
			{
				printf("yes");
			}
		}
	}
	else
	{
		printf("no");
	}
	return 0;
}
