#include <stdio.h>
#include<math.h>
int main(void) 
{
	int a,b,c,res,result;
	scanf("%d %d %d",&a,&b,&c);
	res=pow(a,b);
	result=res%c;
	printf("%d",result);
	return 0;
}
