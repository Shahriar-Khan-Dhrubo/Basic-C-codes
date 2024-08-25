/*#include<stdio.h>
int main()
{
    int n,sum=0,a=3;
    printf("Enter last number of the series :");
    scanf(" %d",&n);
    printf("3+5+7+....+%d = ",n);

    while(a<=n)
    {
        sum=sum+a;
        a=a+2;
    }
    printf("%d",sum);


    return 0;
}*/
#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter last number of the series :");
    scanf(" %d",&n);

    for(i=2;i<=n;i+=2)
    {
        printf("%d\t",i);
        sum=sum+i;

    }
    printf("\nSum = %d",sum);
    return 0;
}
