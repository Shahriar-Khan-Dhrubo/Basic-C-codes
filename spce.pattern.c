#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter number of rows : ");
    scanf(" %d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
        {
            printf("\t");
        }
        for(col=1;col<=row;col++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}
