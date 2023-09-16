#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool Isprime(int n)
{
    if(n == 1 || n==0)
    {
        return false;
    }
    for(int i = 2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(Isprime(i))
        {
           printf("%d ",i);
        }
    }
    return 0;
}