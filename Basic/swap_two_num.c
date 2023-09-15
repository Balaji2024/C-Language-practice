#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    int temp;
    scanf("%d %d",&a,&b);
    printf("Before swap: %d %d\n",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("After swap: %d %d",a,b);
    return 0;
}