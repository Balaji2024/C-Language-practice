#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,no,digit,count=0;
    scanf("%d",&n);
    int k;
    printf("Enter digit to find ");
    scanf("%d",&k);
    while(n>0)
    {
        no++;
        digit = n % 10;
        sum = sum  + digit;
        n = n / 10;
        if(k==digit)
        {
            count++;
        }
    }
    printf("Total no of digit is : %d\n",no);
    printf("Sum of digit is : %d\n",sum);
    printf("Digit present in number is : %d",count);
    return 0;
}