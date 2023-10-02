#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20];
    int x;
    gets(s1);
    strcpy(s2,s1);
    strrev(s1);
    x=strcmp(s1,s2);
    if(x==0)
    printf("Number is palandrome");
    else
    printf("Number is not palandrome");
    return 0;
}