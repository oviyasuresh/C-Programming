#include <stdio.h>
 
int main(void) 
 
{
int i,low,high,j;
printf("\n enter the start range:");
scanf("%d",&low);
printf("\n enter the end range");
scanf("%d",&high);
printf("\n the prime numbers between %d and %d are:",low,high);
for(i=low;i<=high;i++)
{
for(j=2;j<=i;j++)
{
if(i%j==0)
break;
}
if(i==j)
printf("\n%d",j);
}
return 0;
}
