#include<stdio.h>
#include<math.h>
int main()
{
    int a = 0, b = 1,n;
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(int i=1; i <= n; i++)
    {
        int next = a + b;
        printf("%d ",next);
        a = b;
        b = next;
    }
    return 0;
}