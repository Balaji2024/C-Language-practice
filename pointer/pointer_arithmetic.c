#include <stdio.h>
#include <math.h>
int main()
{

    ////pointer arithemetic(addition)

    // int a[5] = {0, 1, -1, 10, 11};
    // int *p = &a[0];
    // printf("%d", *p);
    // p = p + 2;
    // printf("%d", *p);
    // p + 1;
    // printf("%d", *p);

    // int a = 10;
    // int *p = &a;
    // int *q = &a;
    // p = p+q;    //we can't add two pointer variable
    // //Pointers contain addresses. Adding two addresses makes no sense because there is no idea what it would point to
    // printf("%d",p);

    ////pointer arithemetic(substraction)
    // int a[5] = {0, 1, -1, 10, 11};
    // int *p = &a[0];
    // int *q = &a[4];
    // int d = p - q;
    // printf("%d\n",d);
    // *q = 25;
    // printf("%d\n",*q);
    // d = q - p;
    // printf("%d\n",d);
    // *p = 27;
    // printf("%d\n",*p);
    // q = q - 3;
    // printf("%d\n",q);
    // p = p + 3;
    // printf("%d\n",p);
    // d = p - q;
    // printf("%d\n",d);

    // int a[]={10,11,-1,56,67,5,4};
    // int *p,*q;
    // p=a;
    // q=&a[0]+3;

    // printf("%d %d %d\n",(*p)++,(*p)++,*(++p));
    // printf("%d\n",*p);
    // printf("%d\n",(*p)++);
    // printf("%d\n",(*p)++);
    // q--;
    // printf("%d\n",*(p+2)-2);
    // printf("%d\n",*(p++-2)-1);

    // //Pointer to pointer variable
    // int a = 10;
    // int *p,**q;
    // p = &a;
    // q = &p;
    // printf("%p\n",p);
    // printf("%d\n",*p);
    // printf("%d\n",a);
    // printf("%d\n",*p);
    // printf("%d\n",**q);

    // //pointer point an array
    // int a[5] = {10,20,30,40,50};
    // int *p = a;
    // for(int i = 0; i < 5; i++)
    // {
    //     printf("%d\n",*p);
    //     p++;
    // }

    // // input the 5 number in array with the help of pointer & display same array
    // int a[5];
    // int *p;
    // p = &a[0];
    // printf("Enter five number");
    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%d",p);
    //     p++;
    // }
    // printf("Array numbers are");
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("\n%d",a[i]);
    // }
    



	// int k;
	// int a[5]={10,2,3,4,5};
	// int *p;
	// p=a;
	// k=*p+*(p+2)**(p+1);
	// printf("k=%d",k);	









    // //pointer to pointer 
    // int a = 10;
    // int *p = &a;
    // int **q = &q;
    // printf("%d",a);
    // printf("%d",*p);
    // printf("%d",**q);
    
    return 0;
}