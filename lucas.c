#include<stdio.h>
int main()
{
    int n,first=2,second=1,lucas,count=3;
    printf("Enter number of the Lucas series :");
    scanf(" %d",&n);
    printf("%d\t%d\t",first,second);

    while(count<=n)
    {
        lucas=first+second;
        first=second;
        second=lucas;
        count++;
        printf("%d\t",lucas);
    }


    return 0;
}
