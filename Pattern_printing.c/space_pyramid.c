#include<stdio.h>
#include<math.h>
int main()
{
    int n,space;
    scanf("%d",&n);
    for(int row = 1; row <= n;row++)
    {
        for(space=1; space<=n-row;space++)
        {
            printf("  ");
        }
        for(int col = 1; col <= row; col++)
        {
            printf("%d ",row);
        }
        printf("\n");
    }
    return 0;
}