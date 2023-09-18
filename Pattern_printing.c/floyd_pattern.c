#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ch = 1;
    for(int row = 1; row <= n;row++)
    {
        for(int col = 1; col <= row; col++)
        {
            printf("%d ",ch);
            ch++;
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}