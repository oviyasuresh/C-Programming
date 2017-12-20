#include <stdio.h>
int main(void) {
	int n,i,res;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		res=n*i;
		printf("\n%d*%d=%d",n,i,res);
	}
	return 0;
}
