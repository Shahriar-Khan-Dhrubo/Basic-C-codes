#include<stdio.h>
int main()
{
    int num,i,count=0;
    printf("Enter an positive integer number :");
    if(scanf(" %d",&num)==1)
    {
        if(num>1)
        {
            for(i=2; i<num; i++)
            {
                if(num%i==0)
                {
                    count++;
                    break;
                }
            }
            if(count==0)
                printf("It is a prime number.\n");
            else
                printf("Not a prime number.\n");


        }
        else if(num<=1)

            printf("Not a prime number.\n");
        }
    else
        printf("Invalid input.\n");

    return 0;
}
