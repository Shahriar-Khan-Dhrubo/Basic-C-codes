#include<stdio.h>
int main()
{
    int n,row,column;
    printf("Enter row numbers : ");
    scanf(" %d",&n);

    for(row=1;row<=n;row++)
    {
        for(column=1;column<=row;column++)
        {
           printf("%d ",row%2);
        }
        printf("\n");

    }
    return 0;
}