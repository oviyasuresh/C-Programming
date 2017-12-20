#include <stdio.h>
 
int main(void) 
{
int n,remainder,sum=0,result;
printf("\n enter the number:");
scanf("%d",&n);
result=n;
while(n!=0)
{
remainder=n%10;
sum=sum+(remainder*remainder*remainder);
n=n/10;
}
if(result==sum)
printf("\n %d is an Armstrong number",result);
else
printf("\n %d is not an Armstrong number",result);
 
 
return 0;
}
