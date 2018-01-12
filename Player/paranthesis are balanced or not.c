#include <stdio.h>

int main(void) 
{
	char str[20];
	int i,count1=0,count2=0;
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='(')
		{
			count1=count1+1;
		}
		else if(str[i]==')')
		{
			count2=count2+1;
		}
	}
	if(count1==count2)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
