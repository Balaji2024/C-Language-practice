#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("Sum of natural number : %d",sum);
    return 0;
}