#include<stdio.h>
int main()
{
    int n,row,col,i=1;
    printf("Enter number of rows : ");
    scanf(" %d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d\t",i);
            i++;

        }
        printf("\n");

    }
    return 0;
}
