#include <stdio.h>
#include<math.h>
int main(void) 
{
	int a,b,c,res,result;
	scanf("%d %d %d",&a,&b,&c);
	res=pow(a,b);
	printf("%d",res%c);
	return 0;
}
