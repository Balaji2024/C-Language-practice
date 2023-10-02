#include<stdio.h>
#include<math.h>
int main()
{
    int a = 10;
    int *p = &a;
    printf("%p\n",&p);
    printf("%p\n",&a);
    printf("%d\n",a);
    printf("%d\n",*p);
    printf("%p\n",p);
    return 0;
}