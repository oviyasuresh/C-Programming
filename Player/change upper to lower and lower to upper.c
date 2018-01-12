#include <stdio.h>

int main(void) 
{
	char str[20];
	scanf("%s",str);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]>96)
		{
			str[i]=str[i]-32;
		}
		else if(str[i]<91)
		{
			str[i]=str[i]+32;
		}
	}
	printf("%s",str);
		
		
		return 0;
}
