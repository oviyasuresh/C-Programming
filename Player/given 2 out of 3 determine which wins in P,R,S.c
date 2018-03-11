#include <stdio.h>

int main(void)
{
	char a,b;
	scanf("%c %c",&a,&b);
	if(((a=='P' || a=='p')&&(b=='R' || b=='r')) || ((a=='R' || a=='r')&&(b=='P' || b=='p')))
	{
		printf("P");
	}
	else if(((a=='P' || a=='p')&&(b=='S' || b=='s')) || ((a=='S' || a=='s')&&(b=='P' || b=='p')))
	{
		printf("S");
	}
	else if(((a=='R' || a=='r')&&(b=='S' || b=='s')) || ((a=='S' || a=='s')&&(b=='R' || b=='r')))
	{
		printf("R");
	}
	else if(a==b)
	{
		printf("D");
	}
	return 0;
}
