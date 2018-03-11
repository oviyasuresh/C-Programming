#include <stdio.h>

int main(void) 
{
	int a[20],i,y;
	for(i=0;i<20;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<20;i++)
	{
		y=(a[i]*a[i+2])+a[i+1];
		break;
		
	}
	printf("%d",y);
	return 0;
}
