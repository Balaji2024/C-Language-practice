#include <stdio.h>
#include <math.h>

//void sum(); // Function decalration

void main() // Main Function
{

    sum(5, 8); // Function call
    printf("Hello balaji\n");
    sum();
    sum();
    int result = sum();\
    printf("Addition is : %d",result);
}
int sum() // Function definition
{
    int a, b, sum = 0;
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Addition : %d\n", sum);

    return sum;     // we cannot return multiple values from a function directly
    //We can return more than one values from a function by using the method called “call by address”, or “call by reference”.
}

// When we write user defined function after main function then function declaration is must required. if function not declared then it gives an error
// When we not declared function then it takes default function datatype as int. In this method it does not gives any error but gives warning ...read next line
// But when we not declare function and and write user defined function rather then int or void then it gives error as a datatype mismatch
// Function declaration is good programmer sign
