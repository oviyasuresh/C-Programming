#include<stdio.h>
int main()
{
int n, c1, k;
scanf("%d",&n);
 
    for ( c1 = 1 ; c1 <= n ; c1++ )
    {
        for( k = 1 ; k <((n*2)-1) ; k+2 )
            printf("1 ");
 
        printf("\n");
    }
 
    return 0;
}
