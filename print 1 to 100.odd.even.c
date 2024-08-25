#include<stdio.h>
int main()
{
    int range1,range2,i;
    printf("Enter two ranges to show number :");
    scanf(" %d %d",&range1,&range2);

    printf("All numbers within range :\n");
    for(i=range1; i<=range2; i++)
    {
        printf("%d\t",i);
    }
    printf("\n");
    printf("Odd numbers within range :\n");
    for(i=range1; i<=range2; i++)
    {
        if(i%2!=0)
        {
            printf("%d\t",i);
        }
    }
    printf("\n");
    printf("Even numbers within range :\n");
    for(i=range1; i<=range2; i++)
    {
        if(i%2==0)
        {
            printf("%d\t",i);
        }
    }
    printf("\n");


    return 0;
}
