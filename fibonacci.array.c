#include<stdio.h>
int main()
{
    int n,i;
    printf("How many Fibonacci numbers want to show : ");
    scanf(" %d",&n);
    int fibo[n];
    fibo[0]=0;
    fibo[1]=1;

    for(i=2;i<n;i++)
    {
       fibo[i]=fibo[i-1]+fibo[i-2];
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",fibo[i]);
    }
    return 0;
}
