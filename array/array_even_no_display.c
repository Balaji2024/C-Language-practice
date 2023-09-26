#include<stdio.h>
#include<math.h>
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Even numbers are : ");
    for (int i = 0; i < 5; i++)
    {
        if(arr[i]%2==0)
        printf("%d ",arr[i]);
    }
    return 0;
}