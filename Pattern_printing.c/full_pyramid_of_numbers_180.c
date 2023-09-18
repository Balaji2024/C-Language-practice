#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int row = 1; row <= n/2;row++)
    {
        for(int col = 1; col <= row; col++)
        {
            printf("%d",row);
        }
        printf("\n");
    }
    for(int row = (n/2)-1; row >= 0; row--)
    {
        for(int col = 1; col <= row; col++)
        {
            printf("%d",row);
        }
        printf("\n");
    }
    return 0;
}