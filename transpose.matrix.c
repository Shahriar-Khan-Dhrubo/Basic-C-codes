#include<stdio.h>
int main()
{
    int m,n,i,j;
    printf("Enter row & column numbers for matrix A : ");
    scanf(" %d %d",&m,&n);
    printf("Elements of matrix A :\n");
    int a[m][n],transpose[n][m];
//matrix A
    for(i=0; i<m; i++)
    {

        for(j=0; j<n; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf(" %d",&a[i][j]);
        }
        printf("\n");
    }
//printing matrix A
    printf("\nMatrix A =\t");

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n\t\t");
    }
//transpose matrix
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            transpose[i][j]=a[j][i];
        }
    }
//printing transpose matrix
    printf("\nTranspose matrix =\t");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d\t",transpose[i][j]);
        }
        printf("\n\t\t\t");
    }


    return 0;
}
