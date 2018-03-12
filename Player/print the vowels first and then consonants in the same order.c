#include <stdio.h>

int main(void) 
{
	char str[50];
	int n,i;
	scanf("%s",str);
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' )
		{
			printf("%c",str[i]);
			str[i]='+';
		}
		
	}
	for(i=0;i<n;i++)
	{
		if(str[i]!='+')
		if(str[i]!='a' || str[i]!='e' || str[i]!='i' || str[i]!='o' || str[i]!='u' || str[i]!='A' || str[i]!='E' || str[i]!='I' || str[i]!='O' || str[i]!='U' )
		{
			printf("%c",str[i]);
		}
		
	}
	return 0;
}
