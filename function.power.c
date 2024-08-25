#include<stdio.h>
void power(int a);

int main()
{
    while(1)
    {
        int num;
        printf("Enter an integer number = ");
        scanf(" %d",&num);
        power(num);
    }
    return 0;
}


void power(int a)
{
    printf("Result = %d\n",a*a);
}
