#include <stdio.h>

int main(void) 
{
	char str1[50],str2[50];
	int i,k,n1,n2,count=0;
	scanf("%s %s %d",str1,str2,&k);
	n1=strlen(str1);
	n2=strlen(str2);
	if(n1==n2)
	{
		for(i=0;i<n1;i++)
		{
			if(str1[i]==str2[i])
			{
				count=count+0;
			}
			else
			{
				count=count+1;
			}
		}
		if(count==k)
		{
			printf("yes");
		}
		else
		{
			printf("no");
		}
	}
	else
	{
		printf("no");
	}
	return 0;
}
