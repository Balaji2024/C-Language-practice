#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>0)
    printf("+ve");
    else if(n<0)
    printf("-ve");
    else
    printf("zero");
    return 0;
}