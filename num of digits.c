#include<stdio.h>
int main()
{
    int num,temp,count=0;
    printf("Enter an integer number :");
    scanf(" %d",&num);
    temp=num;

    while(temp!=0)
    {
      temp=temp/10;
      count++;

    }
    printf("Number of digits are : %d",count);


    return 0;
}
