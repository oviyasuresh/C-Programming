#include <stdio.h>

int main(void) 
{
	int a,b,c,h;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
	{
		h=a;
	}
	else if(b>a && b>c)
	{
		h=b;
	}
	else
	{
		h=c;
	}
	if((a*a)+(b*b)==(h*h))
	{
		printf("yes");
	}
	else if((b*b)+(c*c)==(h*h))
	{
		printf("yes");
	}
	else if((a*a)+(c*c)==(h*h))
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
