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
        sum=sum*10+reminder;
        temp=temp/10;


    }
    if(sum==num)
        printf("It is a palindrome number.");
    else
        printf("It is not a palindrome number.");


    return 0;


}

