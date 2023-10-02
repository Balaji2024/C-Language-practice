#include<stdio.h>
#include<math.h>
int main()
{
    char s[20];
    int i = 0;
    printf("Enter a string \n");
    //scanf("%s",s);
    gets(s);
    //printf("Your string is : %s",s);
    puts(s);
    while(s[i]!='\0')
    {
        i++;
    }
    printf("length of string is %d",i);
    return 0;
}