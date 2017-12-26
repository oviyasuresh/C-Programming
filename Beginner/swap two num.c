#include <stdio.h>
 
int main(void) 
{
int x,y;
printf("\n enter two numbers to swap:");
scanf("%d %d",&x,&y);
printf("\n before swapping:");
printf("\nx=%d",x);
printf("\ny=%d",y);
x=x+y;
y=x-y;
x=x-y;
printf("\n after swapping:");
printf("\nx=%d",x);
printf("\ny=%d",y);
return 0;
}
 
