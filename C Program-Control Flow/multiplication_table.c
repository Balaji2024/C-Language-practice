 #include<stdio.h>
 #include<math.h>
 int main()
 {
    int num,mul;
    printf("Enter number to print table ");
    scanf("%d",&num);
    printf("Multiplication Table\n");
    for(int i = 1; i <= 10; i++)
    {
        mul = num * i;
        printf("%d * %d = %d\n",num,i,mul);
    }
    return 0;
 }