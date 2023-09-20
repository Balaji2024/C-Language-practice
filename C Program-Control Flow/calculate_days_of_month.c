#include<stdio.h>
#include<math.h>
int main()
{
    int first,last,days=0;
    scanf("%d",&first);
    scanf("%d",&last);
    while(first<=last)
    {
        if(first==1||first==3||first==5||first==7||first==8||first==10||first==12)
        {
            days = days + 31;
        }
        else if(first==4||first==6||first==8||first==9||first==11)
        {
            days = days + 30;
        }
        else
        {
            days = days + 28;
        }
        first++;
    }
    printf("No of days between two limit %d",days);
    return 0;
}