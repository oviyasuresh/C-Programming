#include <stdio.h>
#include<string.h>
int main(void) 
{
	char str1[20],str2[20];
	int i,j,flag=0;
	scanf("%s %s",str1,str2);
	for(i=0;str1[i]!='\0';i++)
	{
		for(j=0;str2[j]!='\0';j++)
		{
			if(str1[i]==str2[j])
			{
				flag=1;
				break;
			}
		}
	}
		if(flag==1)
		{
			printf("yes");
		}
		if(flag==0)
		{
			printf("no");
		}

	return 0;
}
