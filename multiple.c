#include<stdio.h>
int main()
{
    int n,i;
    long long multi=1;
    printf("Enter last number of the series :");
    scanf(" %d",&n);
    printf("1^2 X 2^2 X 3^2 X ..... X %d^2 = ",n);

    for(i=1; i<=n; i++)
    {
        multi=multi*pow(i,2);
    }
    printf("%.2lld",multi);
    return 0;
}
