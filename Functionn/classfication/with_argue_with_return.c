#include<stdio.h>
#include<math.h>

int sum(int a, int b)
{
    int sum;
    sum = a+b;
    return sum;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int result = sum(a,b); 
    printf("Addition is : %d",result);   
    printf("\nFunction with argument and with return type");
    return 0;
}