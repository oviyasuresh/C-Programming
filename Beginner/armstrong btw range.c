#include <stdio.h>
int main(void) 
{
int n,remainder,sum=0;
n=350;
while(n<=450)
{
remainder=n%10;
sum=sum+(remainder*remainder*remainder);
n=n/10;
if(n==sum)
printf("\n %d is an Armstrong number",n);
else
printf("\n %d is not an Armstrong number",n);
}
n++;
return 0;
}
