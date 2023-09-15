#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("Max A : %d",a);
        }
        else
        {
            printf("Max C : %d",c);
        }
    }
    else
    {
        if(b>c)
        printf("Max B : %d",b);
        else
        printf("Max C : %d",c);
    }

    return 0;
}