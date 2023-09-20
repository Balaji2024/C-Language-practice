#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float r1,r2,s,x;
    scanf("%d %d %d",&a,&b,&c);
    s = b*b-4*a*c;
    x = sqrt(s);
    if(s>0) //real and different roots
    {
        r1 = (-b + x) / (2.0 * a);
        r2 = (-b - x) / (2.0 * a);
        printf("Root 1 = %f\nRoot 2 = %f",r1,r2);
    }
    else if(s == 0) //real or equal
    {
        r1 = -b / (2.0 * a);
        printf("Root 1 = %f",r1);
    }
    else    // roots are not real
    {
        printf("Roots are imaginary");
    }
    return 0;
}