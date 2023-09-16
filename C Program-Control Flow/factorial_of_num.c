#include<stdio.h>
#include<math.h>
int main()
{
    int fact = 1,num;
    scanf("%d",&num);
    for(int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("Factorial of a entered number is %d",fact);
    return 0;
}