#include <stdio.h>
#include <math.h>

int callbyvalue(int a, int b);

int callbyvalue(int a, int b)       //Formal parameter --> parameter used in function definition
{
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swap in call by value function %d %d", a, b);

    return 0;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Before swap call by value in main function%d %d\n", a, b);
    callbyvalue(a,b);       //Actual parameter --> Argument used in function call
    printf("\nAfter swap call by value inn main function %d %d", a, b);
}

//In call by value actual parameter is copied into formal parameter
//we can't modify the actual parameter values by changing the value of formal parameter
//In call by value both formal and actual paramter allocate different memory