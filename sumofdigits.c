#include<stdio.h>
int main()
{
    int num,temp,reminder,sum=0;
    printf("Enter an integer number :");
    scanf(" %d",&num);

    temp=num;
    while(temp!=0)
    {
        reminder=temp%10;
        sum=sum+reminder;
        temp=temp/10;


    }
    printf("Sum of the digits are : %d",sum);
    return 0;


}
