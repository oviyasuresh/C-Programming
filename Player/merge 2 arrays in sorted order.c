#include <stdio.h>

int main(void) 
{
	char str1[20],str2[20];
	int i,j,n,m,temp;
	scanf("%d %d",&n,&m);
	scanf("%s",str1);
	scanf("%s",str2);
	for(i=0;i<n;i++)
	{
		
	}
	for(j=0;j<m;j++)
	{
		str1[i]=str2[j];
		i++;
	}
	str1[i]='\0';
	for(i=0;str1[i]!='\0';i++)
	{
		for(j=i+1;str1[j]!='\0';j++)
		{
			if(str1[i]>str1[j])
			{
				temp=str1[i];
				str1[i]=str1[j];
				str1[j]=temp;
			}
		}
	}
	for(i=0;str1[i]!='\0';i++)
	{
		printf("%c ",str1[i]);
	}
	
	return 0;
}
