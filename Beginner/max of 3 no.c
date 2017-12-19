#include <stdio.h>
int main(void) 
{
int a,b,c;
printf("enter the three numbers to find the maximum:\n");
scanf("%d,%d,%d",&a,&b,&c);
if(a>b && a>c)
printf("%d",a);
else if(b>a && b>c)
printf("%d",b);
else if(c>a && c>b)
printf("%d",c);
else
printf("\n enter a number");
return 0;
}
