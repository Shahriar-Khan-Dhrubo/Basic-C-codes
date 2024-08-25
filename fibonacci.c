#include<stdio.h>
int main()
{
    int n,first=0,second=1,fib,count=0;
    printf("Enter number of the Fibonacci series :");
    scanf(" %d",&n);

    while(count<n)
    {
        if(count<=1)
        {
            printf("%d\t",count);
        }

        else
        {
            fib=first+second;
            printf("%d\t",fib);

            first=second;
            second=fib;
        }
        count++;

    }
    return 0;
}
