#include<stdio.h>
#include<string.h>
int main()
{
    char s1[15];
    char s2[15];
    gets(s1);
    gets(s2);
    strcat(s1,s2);
    printf("%s",s1);
    return 0;
}