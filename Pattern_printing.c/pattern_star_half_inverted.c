#include<stdio.h>
#include<math.h>
int main()
{
    // int n;
    // scanf("%d",&n);
    // for(int row = n; row >= 1; row--)
    // {
    //     for(int col = 1; col <= row; col++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }


    // int n;
    // scanf("%d",&n);
    // for(int row = n; row >= 1; row--)
    // {
    //     for(int col = 1; col <= row; col++)
    //     {
    //         printf("%d",col);
    //     }
    //     printf("\n");
    // }


    // int n;
    // scanf("%d",&n);
    // for(int row = n; row >= 1; row--)
    // {
    //     for(int col = row; col >= 1; col--)
    //     {
    //         printf("%d",col);
    //     }
    //     printf("\n");
    // }


    // int n;
    // scanf("%d",&n);
    // for(int row = 1; row <= n; row++)
    // {
    //     for(int col = 1; col <= row; col++)
    //     {
    //         printf("%d",n-row+1);
    //     }
    //     printf("\n");
    // }


    // int n;
    // scanf("%d",&n);
    // for(int row = 1; row <= n; row++)
    // {
    //     for(int col = row; col >= 1; col--)
    //     {
    //         printf("%d",col);
    //     }
    //     printf("\n");
    // }


    
    // int n;
    // scanf("%d",&n);
    // for(int row = 1; row <= n; row++)
    // {
    //     for(int col = row; col <= n; col++)
    //     {
    //         printf("%d",col);
    //     }
    //     printf("\n");
    // }


    
    // int n;
    // scanf("%d",&n);
    // for(int row = 1; row <= n; row++)
    // {
    //     for(int col = 1; col <= row; col++)
    //     {
    //         printf("%d",col%2);
    //     }
    //     printf("\n");
    // }


    
    // int n;
    // scanf("%d",&n);
    // for(int row = 1; row <= n; row++)
    // {
    //     for(int s = 1; s <= n-row; s++)
    //     {
    //         printf(" ");
    //     }
    //     for(int col = 1; col <= row; col++)
    //     {
    //         printf("%d",row);
    //     }
    //     printf("\n");
    // }


        
    // int n;
    // scanf("%d",&n);
    // for(int row = 1; row <= n; row++)
    // {
    //     for(int s = 1; s <= n-row; s++)
    //     {
    //         printf(" ");
    //     }
    //     for(int col = row; col >= 1; col--)
    //     {
    //         printf("%d",col);
    //     }
    //     printf("\n");
    // }


    // int n;
    // scanf("%d",&n);
    // for(int row = 1; row <= n; row++)
    // {
    //     for(int col = 1; col <= row; col++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    // for(int row = n-1; row >= 1; row--)
    // {
    //     for(int col = 1; col <= row; col++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }


    // int n;
    // scanf("%d",&n);
    // for(int row = 1; row <= n; row++)
    // {
    //     for(int col = 1; col <= row; col++)
    //     {
    //         printf("%d",col);
    //     }
    //     printf("\n");
    // }
    // for(int row = n-1; row >= 1; row--)
    // {
    //     for(int col = 1; col <= row; col++)
    //     {
    //         printf("%d",col);
    //     }
    //     printf("\n");
    // }



    // int n;
    // scanf("%d",&n);
    // for(int row = 1; row <= n; row++)
    // {
    //     for(int s = 1 ; s < row; s++)
    //     {
    //         printf(" ");
    //     }
    //     for(int col = row; col <= n; col++)
    //     {
    //         printf("%d",col);
    //     }
    //     printf("\n");
    // }


    
    // int n;
    // scanf("%d",&n);
    // for(int row = 1; row <= n; row++)
    // {
    //     for(int s = 1 ; s < row; s++)
    //     {
    //         printf(" ");
    //     }
    //     for(int col = 1; col <= n-row+1; col++)
    //     {
    //         printf("%d",col);
    //     }
    //     printf("\n");
    // }


    // int n;
    // scanf("%d",&n);
    // for(int row = 1; row <= n; row++)
    // {
    //     for(int s = 1 ; s < row; s++)
    //     {
    //         printf(" ");
    //     }
    //     for(int col = 1; col <= n-row+1; col++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }


    // int n;
    // scanf("%d",&n);
    // for(int row = 1; row <= n; row++)
    // {
    //     for(int s = 1 ; s < row; s++)
    //     {
    //         printf(" ");
    //     }
    //     for(int col = 1; col <= n-row+1; col++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }



    // int n;
    // scanf("%d",&n);
    // for(int row = n; row >= 1; row--)
    // {
    //     for(int s = 1 ; s <= n-row; s++)
    //     {
    //         printf("  ");
    //     }
    //     for(int col = 1; col <= 2*row-1; col++)
    //     {
    //         printf("%d ",col);
    //     }
    //     printf("\n");
    // }



    // int n;
    // scanf("%d",&n);
    // for(int row = 1; row <= n; row++)
    // {
    //     for(int s = 1 ; s <= n-row; s++)
    //     {
    //         printf("  ");
    //     }
    //     for(int col = 1; col <= 2*row-1; col++)
    //     {
    //         printf("%d ",col);
    //     }
    //     printf("\n");
    // }



    
    int n;
    scanf("%d",&n);
    for(int row = 1; row <= n; row++)
    {
        for(int s = 1 ; s <= n-row; s++)
        {
            printf("  ");
        }
        for(int col = 1; col <= 2*row-1; col++)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
    for(int row = n; row >= 1; row--)
    {
        for(int s = 1 ; s <= n-row; s++)
        {
            printf("  ");
        }
        for(int col = 1; col <= 2*row-1; col++)
        {
            printf("%d ",col);
        }
        printf("\n");
    }

    d=10 d!=1
    
    return 0;
}