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
    


    //Pointer to pointer variable
    int a = 10;
    int *p,**q;
    p = &a;
    q = &p;
    printf("%p\n",p);
    printf("%d\n",*p);
    printf("%d\n",a);
    printf("%d\n",*p);
    printf("%d\n",**q);
    return 0;
}