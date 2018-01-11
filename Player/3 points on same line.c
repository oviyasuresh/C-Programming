#include <stdio.h>

int main(void) 
{
	char str1[2],str2[2],str3[2];
	scanf("%s\n",str1);
	scanf("%s\n",str2);
	scanf("%s\n",str3);
	if((str1[0]=str2[0]=str3[0])||(str1[1]=str2[1]=str3[1]))
	{
		printf("yes");
	}
	else if((str1[0]=str1[1])&&(str2[0]=str2[1])&&(str3[0]=str3[1]))
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
