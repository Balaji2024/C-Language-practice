#include<stdio.h>
#include<math.h>

void sum(int a, int b)
{
    int sum;
    sum = a+b;
    printf("Addition is : %d",sum);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    sum(a,b);    
    printf("\nFunction with argument and without return type");
    return 0;
}