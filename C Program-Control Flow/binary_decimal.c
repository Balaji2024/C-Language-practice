#include<stdio.h>
#include<math.h>
int main()
{
    int binary,decimal=0,digit,i=0;
    scanf("%d",&binary);
    int temp = binary;
    while(binary>0)
    {
        digit = binary % 10;
        if(digit>2)
        {
            return 0;
        }
        binary = binary / 10;
    }
    binary = temp;
    while(binary>0)
    {
        digit = binary % 10;
        decimal = decimal + digit * pow(2,i);
        i++;
        binary = binary / 10;
    }
    printf("Decimal number is : %d",decimal);
    return 0;
}