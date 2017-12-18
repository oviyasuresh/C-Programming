#include<stdio.h>
int main(void)
{
char x;
printf("\n enter the character to check:");
scanf("%c",&x);
if(x>='a' && x<='z' || x>='A' && x<='Z')
{
printf("\nyes %c is an alphabet",x);
}
else
printf("\n no it is not an alphabet");
return 0;
}
