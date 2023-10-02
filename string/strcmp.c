#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20];
    char s2[20];
    int x;
    gets(s1);
    gets(s2);
    x=strcmp(s1,s2);
    printf("%d",x);
    return 0;
}