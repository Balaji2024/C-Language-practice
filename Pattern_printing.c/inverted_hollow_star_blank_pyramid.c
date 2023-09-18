#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int row = 0; row < n; row++)
    {
        for(int col=0; col < row; col++)
        {
            printf(" ");
        }
        for(int col = 0; col < n-row; col++)
        {
            if(col==0 || col==n-row-1||row==0)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}