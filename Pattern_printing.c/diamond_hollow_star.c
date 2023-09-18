#include<stdio.h>
#include<math.h>
int main()
{
    int n,space;
    scanf("%d",&n);
    for(int row = 1; row <= n; row++)
    {
        for(space=1; space<=n-row;space++)
        {
            printf(" ");
        }
        for(int col = 1; col <= row; col++)
        {
            if(col==1||col==row)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    for(int row = 1; row < n; row++)
    {
        for(int col=0; col < row; col++)
        {
            printf(" ");
        }
        for(int col = 0; col < n-row; col++)
        {
            if(col==0 || col==n-row-1)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}