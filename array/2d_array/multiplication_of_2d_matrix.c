#include <stdio.h>
int main()
{
    int arr[2][2], arr2[2][2], arr3[2][2],sum=0;
    printf("Enter first array elements : ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter second array elements : ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("first matrix is\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	printf("second matrix is\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%d\t",arr2[i][j]);
		}
		printf("\n");
	}
    printf("Multiplication of two matrix is :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum = 0; 
            for (int k = 0; k < 2; k++)
            {
                sum = sum + arr[i][k] * arr2[k][j]; 
                arr3[i][j] = sum;
            }
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}