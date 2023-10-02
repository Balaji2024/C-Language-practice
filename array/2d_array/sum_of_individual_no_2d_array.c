#include <stdio.h>
#include <math.h>
int main()
{
    int arr[2][2], SR = 0, SC = 0;
    printf("Enter array elements : ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Matrix is :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 2; i++)
    {
        SR = SC = 0;
        for (int j = 0; j < 2; j++)
        {
            SR = SR + arr[i][j];
            SC = SC + arr[j][i];
        }
        printf("\n");
        printf("Sum of rows %d = %d\t", i + 1, SR);
        printf("Sum of column %d = %d", i + 1, SC);
    }
    return 0;
}