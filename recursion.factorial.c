#include<stdio.h>
int fact(int n);
int main()
{
    int result=fact(9);
    printf("Factorial of the number is = %d",result);
    return 0;
}
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
