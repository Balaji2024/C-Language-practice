#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50],ch,len,count=0;
    gets(s1);
    printf("Enter character to find : ");
    scanf("%c",&ch);
    len = strlen(s1);
    for(int i=0;i<len;i++)
    {
        if(s1[i]==ch)
        {
            count++;
        }
    }
    printf("Character founds %d times",count);
    return 0;
}