#include <stdio.h>
#include <math.h>

int main()
{
    int n,n1;
    scanf("%d %d",&n1,&n);

    for (int num = n1; num <= n; num++)
    {
        int count = 0;
        int arm = 0;
        int temp = num;

        while (temp > 0)
        {
            temp = temp / 10;
            count++;
        }

        temp = num; // Reset temp to the original number

        while (temp > 0)
        {
            int digit = temp % 10;
            arm = arm + pow(digit, count);
            temp = temp / 10;
        }

        if (arm == num)
        {
            printf("Armstrong number : %d\n", num);
        }
    }

    return 0;
}