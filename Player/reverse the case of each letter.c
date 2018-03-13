#include <stdio.h>

int main(void) 
{
	char str[30];
	int i;
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=97)
		{
			str[i]=str[i]-32;
		}
		else if(str[i]>=65)
		{
			str[i]=str[i]+32;
		}
	}
	for(i=0;str[i]!='\0';i++)
	{
		printf("%c",str[i]);
	}
	return 0;
}
