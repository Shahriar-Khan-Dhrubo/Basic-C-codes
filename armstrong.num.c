#include<stdio.h>
int main()
{
    int num,temp,reminder,power=0,sum=0;
    printf("Enter a number :");
    scanf(" %d",&num);
    temp=num;

    while(temp!=0)
    {
        temp=temp/10;
        power++;
    }
    temp=num;

    while(temp!=0)
    {
        reminder=temp%10;
        sum=sum+pow(reminder,power);
        temp=temp/10;
    }
    if(sum==num)
        printf("It is an Armstrong number.\n");
    else
        printf("Not an Armstrong number.\n");


    return 0;
}
