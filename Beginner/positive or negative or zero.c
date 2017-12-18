#include<stdio.h>
int main()
{
int num;
printf("enter the number to check:");
scanf("%d",&num);
if(num<0)
printf("\n %d is negative",num);
else if(num>0)
printf("\n %d is positive",num);
else
printf("\n the entered number is %d",num);
return 0;
}

