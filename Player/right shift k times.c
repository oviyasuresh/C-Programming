#include <stdio.h>

int main(void) 
{
	int n,k;
	float res;
	scanf("%d %d",&n,&k);
	res=n>>k;
	printf("%.2f",res);
	return 0;
}
