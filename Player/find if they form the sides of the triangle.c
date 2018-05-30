#include <stdio.h>

int main(void) 
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a+b>c)
	{
		if(a+c>b)
		{
			if(b+c>a)
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
