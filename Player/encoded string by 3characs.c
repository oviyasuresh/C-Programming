#include <stdio.h>

int main(void) 
{
	char str[50];
	int i,n;
	scanf("%s",str);
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		str[i]=str[i]+3;
		if(str[i]=='X')
		str[i]='A';
		if(str[i]=='Y')
		str[i]='B';
		if(str[i]=='Z')
		str[i]='C';
	}
	printf("%s",str);
	return 0;
}
