#include<stdio.h>
#include<math.h>

void sum()
{
    int a,b,sum=0;
    scanf("%d %d",&a,&b);
    sum = a+b;
    printf("Addition is : %d",sum);
}
int main()
{
    sum();
    printf("\nFunction without argument and without return type");
    return 0;
}