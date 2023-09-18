#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ch = 15;
    for(int row = n; row > 0;row--)
    {
        for(int col = 1; col <= row; col++)
        {
            printf("%d ",ch);
            ch--;
            //printf("* ");
        }
        printf("\n");
    }
    return 0;
}