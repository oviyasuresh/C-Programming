#include <stdio.h>
 
int main(void) 
{
	int a,b,c,mod;
	scanf("%d %d %d",&a,&b,&c);
	mod=((a*b)%c);
	printf("\n%d",mod);
	return 0;
}
