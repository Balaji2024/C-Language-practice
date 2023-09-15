#include<stdio.h>
#include<math.h>
int main()
{
    float far,cel;
    scanf("%f",&far);
    cel = (far-32)*5/9;
    printf("Celsius: %f",cel);
    return 0;
}