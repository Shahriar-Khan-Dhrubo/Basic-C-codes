#include<stdio.h>
int main()
{
    int m,n,i,j;
    printf("Enter row & column numbers for matrix A : ");
    scanf(" %d %d",&m,&n);
    printf("Elements of matrix A :\n");
    int a[m][n],b[m][n],c[m][n];
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


    printf("\n");
//matrix B
    for(i=0; i<m; i++)
    {

        for(j=0; j<n; j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf(" %d",&b[i][j]);
        }
    }
//printing matrix A & B
    printf("\nMatrix A =\t");

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n\t\t");
    }
    printf("\nMatrix B =\t");

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n\t\t");
    }
//matrix A+B
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            c[i][j]=a[i][j]+ b[i][j];
        }
    }
//printing C=A+B
printf("\nMatrix C =\t");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n\t\t");
    }

    return 0;
}
