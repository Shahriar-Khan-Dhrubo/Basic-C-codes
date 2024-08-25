#include<stdio.h> //different number pattern practice
int main()
{
    int n,row,col;
    printf("Enter N : ");
    scanf(" %d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d\t",row*col);
        }
        printf("\n");
    }
    return 0;
}
