#include <stdio.h>
#include<string.h>
int main(void) 
{
	char str[50];
	int i,len;
	scanf("%[^\n]s",str);
	len=strlen(str);
	if(str[0]>91)
	{
		str[0]=str[0]-32;
	}
	for(i=0;i<len;i++)
		{
			if(str[i]==' ')
			{
				if(str[i+1]>91)
				{
					str[i+1]=str[i+1]-32;
				}
			}
		}
	printf("%s",str);
	return 0;
}
