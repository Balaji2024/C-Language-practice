#include<stdio.h>
#include<math.h>
int main()
{
    int arr[5],total=0,count=0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        total = total + arr[i];
    }
    printf("Total marks : %d\n",total);
    for (int i = 0; i < 5; i++)
    {
        if(arr[i]<35)
        count++;
    }
    if(count!=0)
    printf("Student fail in %d subjects\n",count);
    else
    printf("Student is pass in all subjects ");
    return 0;
}