#include<stdio.h>
int main()
{
    int num1,num2,large,small;
    printf("Enter two numbers :");
    scanf(" %d %d",&num1,&num2);
    large = (num1 > num2) ? num1 : num2;
    small = (num1 < num2) ? num1 : num2;
    if(num1==num2)
    {
        printf("The numbers are equal.\n");
    }
    else
    {
        printf("Large number is : %d\n",large);
        printf("Small number is : %d",small);
    }
    return 0;
}
