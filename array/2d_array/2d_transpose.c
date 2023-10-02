#include<stdio.h>
#include<math.h>
int main()
{
    int arr[2][2],sum=0;
    printf("Enter array elements : ");
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Transpose matrix is :\n");
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("%d ",arr[j][i]);
            sum = sum + arr[j][i];
        }
        printf("\n");
    }
    printf("Sum = %d",sum);
    return 0;
}