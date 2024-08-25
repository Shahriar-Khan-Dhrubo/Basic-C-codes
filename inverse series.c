#include<stdio.h>
int main()
{
    float n,i,sum=0;
    printf("Enter last number of the series :");
    scanf(" %f",&n);

    for(i=1;i<=n;i++)
    {
        if(i==1)
            printf("%.2f +",i);
        else if(i==n)
            printf(" 1/%.2f = ",i);
        else
            printf(" 1/%.2f +",i);

        sum=sum+(1/i);
    }
    printf("%.2f\n",sum);


    return 0;
}
