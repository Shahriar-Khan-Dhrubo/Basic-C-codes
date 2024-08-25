#include<stdio.h>
void power(int base,int exp);
int main()
{
    int number,pow;
    printf("Enter base & exponent = ");
    scanf(" %d %d",&number,&pow);
    power(number,pow);
    return 0;
}
void power(int base,int exp)
{
    int result=1,i;
    for(i=1;i<=exp;i++)
    {
        result=result*base;
    }
    printf("Result = %d",result);
}
