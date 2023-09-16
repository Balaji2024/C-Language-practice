#include<stdio.h>
#include<math.h>
int main()
{
    int num,rev=0;
    scanf("%d",&num);
    int temp = num;
    while(num>0)
    {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    if(temp==rev)
    printf("Number is palendrome ");
    else
    printf("Number is not palendrome ");
    return 0;
}