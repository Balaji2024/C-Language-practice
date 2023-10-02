#include<stdio.h>
#include<math.h>
int main()
{
    int a = 10,b=20,c,d,e;
    int *p,*q;
    p = &a;
    q = &b;
    c = *p + *q;
    d = *p * *q;
    e = *q / *p;

    printf("%d %d %d %d %d\n",a,b,c,d,e);

    *p = *p + c * e;
    *q = *p + *q;

    printf("%d %d %d %d %d\n",a,b,c,d,e);
    return 0;
}