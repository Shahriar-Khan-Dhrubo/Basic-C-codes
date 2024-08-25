#include<stdio.h>
int main()
{
    int m,n,i,j;
    printf("How many row & column want to use : ");
    scanf(" %d %d",&m,&n);

    int a[m][n];

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf(" %d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Array contents :\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
