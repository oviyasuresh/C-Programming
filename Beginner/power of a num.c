#include <stdio.h>
 
int main(void) 
{
int num,power,result=1;
printf("\n enter the number:");
scanf("%d",&num);
printf("\n enter the power:");
scanf("%d",&power);
while(power!=0)
{
result*=num;
--power;
}
printf("\n%d",result);
return 0;
}
 
