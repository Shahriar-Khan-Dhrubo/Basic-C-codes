#include<stdio.h> // need to learn coding for larger values.like output showing e^something
int main()
{
    int num,i;
    printf("Enter number for factorial :");

    if(scanf(" %d",&num)==1)
    {
        long long fact=1;
        if(num==0)
            printf("Factorial for the number is : 1\n");
        else if(num<0)
            printf("Factorial is not defined for negative integers.");


        else
        {
            for(i=1; i<=num; i++)
            {
                fact=fact*i;
            }
            printf("factorial for the number is : %lld\n",fact);
        }

    }
    else
        printf("Invalid input.\n");

    return 0;
}
