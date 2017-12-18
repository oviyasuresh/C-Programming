
#include <stdio.h>
 
int main(void)
 {
 
char x;
printf("\n enter the element:");
scanf("%c",&x);
if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
{
printf("it is a vowel");
}
else
{
printf("\n it is a consonant");
}
 
return 0;
}
