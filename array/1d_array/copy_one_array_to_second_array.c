#include<stdio.h>
#include<math.h>
int main()
{
    int arr[10];
    int arr2[10];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        arr2[i] = arr[i];
    }
    printf("Second array : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d",arr2[i]);
    }

    
    return 0;
}