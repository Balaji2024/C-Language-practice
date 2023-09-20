#include <stdio.h>
#include <math.h>
int Isprime(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n1,n2;
    scanf("%d %d", &n1,&n2);
    printf("Prime numbers between %d and %d is : ",n1,n2);
    for (int i = n1; i <= n2; i++)
    {
        int ans = Isprime(i);
        if (ans == 2)
        {
            printf("%d ",i);
        }
    }
    return 0;
}