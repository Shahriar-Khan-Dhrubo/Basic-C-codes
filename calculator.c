//error occurs for division and mod if second number is zero.need to improve it by using condition
#include<stdio.h>
int main()
{
    float num1,num2;
    char oper;
    printf("Enter an operator (+,-,*,/,%%)");
    scanf(" %c",&oper);
    switch(oper)
    {
    case '+':
    {
        printf("Enter two numbers :");
        scanf(" %f %f",&num1,&num2);
        printf("%.2f + %.2f = %.2f",num1,num2,num1+num2);
        break;
    }
    case '-':
    {
        printf("Enter two numbers :");
        scanf(" %f %f",&num1,&num2);
        printf("%.2f - %.2f = %.2f",num1,num2,num1-num2);
        break;
    }
    case '*':
    {
        printf("Enter two numbers :");
        scanf(" %f %f",&num1,&num2);
        printf("%.2f * %.2f = %.2f",num1,num2,num1*num2);
        break;
    }
    case '/':
    {
        printf("Enter two numbers :");
        scanf(" %f %f",&num1,&num2);
        if(num2!=0)
            printf("%.2f / %.2f = %.2f",num1,num2,num1/num2);
        else
            printf("Second number can not be zero.");
        break;
    }
    case '%':
    {
        int num3,num4;
        printf("Enter two numbers :");
        scanf(" %d %d",&num3,&num4);
        if(num4!=0)
            printf("%d %% %d = %d",num3,num4,num3%num4);
        else
            printf("Second number can not be zero.");
        break;
    }
    default:
        printf("Invalid operator.");
    }
    return 0;
}

