#include<stdio.h>
#include<math.h>
int main()
{
    int a = 0, b = 1,n,sum = 1;
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(int i=1; i <= n; i++)
    {
        int next = a + b;
        printf("%d ",next);
        sum =sum + a + b;
        a = b;
        b = next;
    }
    printf("\nSum of fibonacci series : %d",sum);
    return 0;
}