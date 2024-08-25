#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter last number of the series :");
    scanf(" %d",&n);
    printf("1^2+2^2+3^2+...+%d^2 = ",n);

    for(i=1;i<=n;i++)
    {
        sum=sum+pow(i,2);

    }
    printf("%d",sum);


    return 0;
}
