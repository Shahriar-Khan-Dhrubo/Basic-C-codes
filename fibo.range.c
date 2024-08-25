#include<stdio.h>
int main()
{
    int range,first=0,second=1,fib=0;
    printf("Enter range for Fibonacci series :");
    scanf(" %d",&range);
    printf("%d\t%d\t",first,second);

    while(fib<=range)
    {
        fib=first+second;
        first=second;
        second=fib;
        if(fib<=range)
            printf("%d\t",fib);
    }

    return 0;
}
