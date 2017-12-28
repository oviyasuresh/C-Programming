#include <stdio.h>



int main(void) 

{

int a=1,b=1,i,n,c;

printf("\n enter the range to print the Fibonacci numbers\n");

scanf("%d",&n);

printf("%d",a);

printf("\t%d",b);

for(i=1;i<=n-2;i++)

{

c=a+b;

printf("\t%d",c);

a=b;

b=c;

}

return 0;

}
