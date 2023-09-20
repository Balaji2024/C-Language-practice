#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
    float rad,area;
    scanf("%f",&rad);
    area = PI * rad * rad;
    printf("%f",area);
    return 0;
}