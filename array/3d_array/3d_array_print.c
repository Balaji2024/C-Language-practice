#include<stdio.h>
#include<math.h>
int main()
{
    int arr[2][2][2];
    printf("Enter 3*3 matrix : \n");
    for(int i=0; i<2;i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                scanf("%d",&arr[i][j][k]);
            }
        }
    }
    printf("3*3 Matrix is: \n");
    for(int i=0; i<2;i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("%d",arr[i][j][k]);
            }
        }
        printf("\n");
    }
    return 0;
}