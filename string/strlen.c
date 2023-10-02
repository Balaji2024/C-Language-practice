#include<stdio.h>
#include<string.h>
int main()
{
    char s1[15];
    char s2[15];
    int x,y;
    gets(s1);
    gets(s2);
    x=strlen(s1);
    y=strlen(s2);
    printf("%d",x);
    printf("%d",y);
    return 0;
}