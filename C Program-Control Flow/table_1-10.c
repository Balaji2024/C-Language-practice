#include <stdio.h>
#include <math.h>
int main()
{
    int n=1, table;
    while (n <= 10)
    {
        int a = 1;
        while (a <= 10)
        {
            table = n * a;
            printf("%d * %d = %d\n", n, a, table);
            a++;
        }
        printf("\n");
        n++;
    }
    return 0;
}