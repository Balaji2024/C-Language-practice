#include<stdio.h>
#include<math.h>
int main()
{
    int u,x;
    float bill;
    scanf("%d",&u);
    if(u<100)
    {
        bill = 0.6 * u;
    }
    else if(u > 100 && u < 200)
    {
        x = u - 100;
        bill = 100 * 0.6 + 0.8 * x;
    }
    else
    {
        x = u -200;
        bill = 100 * 0.6 + 100 * 0.8 + 1 * x;
    }
    printf("Bill : %0.2f",bill);
    return 0;
}