#include<stdio.h>
#include<math.h>
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    int m = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if(arr[i]>m)
        m = arr[i];
    }
    printf("Max number is : %d",m);
    return 0;
}