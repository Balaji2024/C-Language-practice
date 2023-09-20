#include<stdio.h>
#include<math.h>
int main()
{
    int n1,n2,sum = 0;
    scanf("%d%d",&n1,&n2);
    while(n1<=n2)
    {
        if(n1%2==0)
        {
            printf("%d ",n1);
            sum = sum + n1;
        }
        n1++;
    }
    printf("\nSum of even no in that limit is : %d",sum);

    return 0;
}