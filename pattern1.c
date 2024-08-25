#include<stdio.h>
int main()
{
    int n,count,i;
    printf("Enter row numbers : ");
    scanf(" %d",&n);
    for(count=1;count<=n;count++)
    {
        for(i=1;i<=count;i++)
        {
            printf("%d ",count);
        }
        printf("\n");

    }
    return 0;
}
