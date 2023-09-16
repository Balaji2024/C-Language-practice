#include <stdio.h>
#include <math.h>
#include<stdlib.h>
int main()
{
    int choice, a, b, c;
    do
    {
        printf("\n 1.Addition\n 2.Substraction\n 3.Multiplication\n 4.Division\n");
        printf("Enter a choice ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            scanf("%d %d", &a, &b);
            c = a + b;
            printf("Addition : %d", c);
            break;
        case 2:
            scanf("%d %d", &a, &b);
            c = a - b;
            printf("Substration : %d", c);
            break;
        case 3:
            scanf("%d %d", &a, &b);
            c = a * b;
            printf("Multiplication : %d", c);
            break;
        case 4:
            scanf("%d %d", &a, &b);
            c = a / b;
            printf("Division : %d", c);
            break;
        default:
            printf("Enter a valid choice\n");
            break;
        }
    }while(1);
    return 0;
}