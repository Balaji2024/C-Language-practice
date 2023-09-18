#include<stdio.h>
#include<math.h>
int main()
{
    int n,space;
    scanf("%d",&n);
    for(int row = 0; row <= n; row++)
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