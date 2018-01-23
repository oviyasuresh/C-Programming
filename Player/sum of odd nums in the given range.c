#include<stdio.h>
int main(void)
{
    int l,r,i,sum=0;
    scanf("%d %d",&l,&r);
    for(i=l;i<=r;i++)
    {
        if(i%2==1)
        {
            sum=sum+i;
        }
    }
    printf("%d",sum);
}
