#include<stdio.h>
int main()
{
    int num,temp,reminder,i;
    int sum=0,fact=1;
    printf("Enter a number :");
    scanf(" %d",&num);
    temp=num;

    while(temp!=0)
    {
        reminder=temp%10;
        fact=1;

        for(i=1; i<=temp; i++)
        {
            fact=fact*i;

        }
        sum=sum+fact;
        temp=temp/10;
    }

    if(sum==num)
        printf("It is a strong number.");
    else
        printf("It is not a strong number.");
    return 0;
}
