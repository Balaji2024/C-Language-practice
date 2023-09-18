#include<stdio.h>
#include<math.h>
int main()
{
    int num,space;
    scanf("%d",&num);
    int  n = num / 2;
    for(int row = 1; row <= n; row++)
    {
        for(space=1; space<=n-row;space++)
        {
            printf(" ");
        }
        for(int col = 1; col <= row; col++)
        {
            
            printf("* ");
        }
        printf("\n");
    }
    for(int row = 1; row <= n; row++)
    {
        for(space=1; space <= row; space++)
        {
            printf(" ");
        }
        for(int col = 1; col <= n-row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}