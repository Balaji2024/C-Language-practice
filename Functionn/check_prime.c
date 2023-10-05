#include<stdio.h>
#include<math.h>
int Isprime(int n)
{
    if(n<=1)
    {
        return 0;
    }
    int count = 0;
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n;
    scanf("%d",&n);
    int ans = Isprime(n);

    if(ans==2)
    {
        printf("Number is prime ");
    }
    else
    {
        printf("Number is not prime ");
    }

    return 0;
}