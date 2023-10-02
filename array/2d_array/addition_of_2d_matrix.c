#include <stdio.h>
#include <math.h>
int main()
{
    int arr[2][2], arr2[2][2], arr3[2][2],sum = 0;
    printf("Enter first array elements : ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter second array elements : ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("Addition of two matrix is :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            arr3[i][j] =  arr[i][j] + arr2[i][j];
            printf("%d\t", arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}