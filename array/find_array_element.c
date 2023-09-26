#include <stdio.h>
#include <math.h>
int main()
{
    int arr[10];
    int k,count=0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter number to search : ");
    scanf("%d", &k);
    for (int i = 0; i < 5; i++)
    {
        if (k == arr[i])
        {
            count++;
        }
    }
    if(count!=0)
    printf("Number present %d times",count);
    else
    printf("Number is not found");
    return 0;
}