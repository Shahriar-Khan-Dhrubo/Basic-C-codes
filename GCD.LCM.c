#include<stdio.h>
int main()
{
    int num1,num2,n1,n2,reminder,gcd,lcm;
    printf("Enter two positive numbers for GCD & LCM :");
    scanf(" %d %d",&num1,&num2);
    n1=num1;
    n2=num2;

    if(num1&&num2>0)
    {

        while(num2!=0)
        {
            reminder=num1%num2;
            num1=num2;
            num2=reminder;

        }
        gcd=num1;
        printf("GCD of two numbers is : %d\n",gcd);

        lcm=n1*n2/gcd;
        printf("LCM of two numbers is : %d\n",lcm);
    }
    else
        printf("Enter numbers above 0.");

    return 0;

}
