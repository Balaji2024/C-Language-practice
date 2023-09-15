#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,SI;
    scanf("%f %f %f",&p,&r,&t);
    SI = p+ (p * r * t) / 100;
    printf("%0.2f",SI);

    return 0;
}