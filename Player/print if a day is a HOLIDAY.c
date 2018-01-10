#include <stdio.h>
 
int main(void) 
{
	char str[50];
	scanf("%s",str);
	if(str[0]=='S' || str[0]=='s')
	{
		printf("\nyes");
	}
	else
	{
		printf("\nno");
	}
	return 0;
}
 
