#include <stdio.h>

int main(void) 
{
	float p,r,result;
	int si,n;
	scanf("%f %d %f",&p,&n,&r);
	result=((p*n*r)/100);
	si=floor(result);
	printf("\n%d",si);
	return 0;
}
