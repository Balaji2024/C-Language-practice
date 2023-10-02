#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20];
    gets(s1);
    strupr(s1);
    printf("%s",s1);
    return 0;
}