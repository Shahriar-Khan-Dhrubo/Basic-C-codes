#include<stdio.h>
int main()
{
    int range1,range2,i,temp,reminder,power=0,sum=0;
    printf("Enter ranges for Armstrong number :");
    scanf(" %d %d",&range1,&range2);

    for(i=range1;i<=range2;i++)
    {
    temp=i;
    power=0;
    sum=0;
    while(temp!=0)
    {
        temp=temp/10;
        power++;
    }
    temp=i;

    while(temp!=0)
    {
        reminder=temp%10;
        sum=sum+pow(reminder,power);
        temp=temp/10;
    }
    if(sum==i)
        printf("%d\t",sum);

    }

    return 0;
}

