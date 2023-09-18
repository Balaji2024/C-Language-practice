#include<stdio.h>
#include<math.h>
int main()
{
    int n,c;
    scanf("%d",&n);
    for(int row = 0; row < n; row++)
    {
        for(int s = 1;s < n-row; s++)
        {
            printf(" ");
        }
        for(int col = 0; col <= row; col++)
        {
            if(row==0||col==0)
               c = 1;
            else
            c = (c*(row-col+1))/col;
            printf("%d ",c);

        }
        printf("\n");
    }
    return 0;
}