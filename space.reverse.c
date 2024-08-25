#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter number of rows :");
    scanf(" %d",&n);

    for(row=n;row>=1;row--)
    {
        for(col=1;col<=n-row;col++)
        {
           printf("\t");
        }
        for(col=1;col<=row;col++)
        {
            printf("%c\t",col+64);
        }
        printf("\n");
    }
    return 0;
}
