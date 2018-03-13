#include <stdio.h>

int main(void) 
{
	char str[30];
	int i,n,flag;
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]>='1' && str[i]<='9') || (str[i]>='A' && str[i]<='F'))
		{
			flag=1;
		}
		else
		{
			flag=0;
			break;
		}
	}
	if(flag==0)
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}
	return 0;
}
