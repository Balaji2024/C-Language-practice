#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        printf("A max");
        else
        printf("C max");
    }
    else
    {
        if(b>c)
        printf("B max");
        else
        printf("C max");
    }
    return 0;
}