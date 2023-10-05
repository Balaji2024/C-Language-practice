#include<stdio.h>
#include<math.h>

int sum()
{
    int a,b,sum=0;
    scanf("%d %d",&a,&b);
    sum = a+b;
    return sum;
}
int main()
{
    int result;
    result = sum();
    printf("Addition is : %d",result);
    printf("\nFunction without argument and with return type");
    return 0;
}