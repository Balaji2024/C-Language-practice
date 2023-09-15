#include<stdio.h>
#include<math.h>
int main()
{
    int AR,peri,len,width;
    scanf("%d %d",&len,&width);
    AR = len * width;
    printf("Area of rectangle: %d\n",AR);
    peri = 2 * (len + width);
    printf("Perimeter of rectangle: %d",peri);
    return 0;
}