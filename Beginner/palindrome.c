#include <stdio.h>
 
int main(void) 
{
 
int n,remainder,reverse=0;
int result;
printf("\n enter the number:");
scanf("%d",&n);
result=n;
while(n!=0)
{
remainder=n%10;
reverse=reverse*10+remainder;
n=n/10;
}
if(result==reverse)
printf("\n it is a palindrome %d",reverse);
else
printf("\n it is not a palindrome");
return 0;
}
 
