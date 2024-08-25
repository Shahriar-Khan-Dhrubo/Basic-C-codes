#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("How many numbers want to sum : ");
    scanf(" %d",&n);
    int num[n];

    for(i=0;i<n;i++)
    {
        scanf(" %d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+num[i];
    }
    printf("Sum = %d\n",sum);
    printf("Avg. = %.2f",(float)sum/n);

    return 0;
}
