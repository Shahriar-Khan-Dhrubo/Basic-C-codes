#include<stdio.h>
int main()
{
    int m,n,i,j;
    printf("Enter row & column of a square matrix : ");
    scanf(" %d %d",&m,&n);

    while(m!=n)
    {
        printf("Not a square matrix.\n");
        printf("Enter row & column of a square matrix : ");
        scanf(" %d %d",&m,&n);
    }

//matrix A
    int a[m][n];
    printf("\nElements of matrix A :\n");
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
    printf("Matrix A =\t");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n\t\t");
    }
//determining trace of a square matrix
    int sum=0;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==j)
                sum=sum+a[i][j];
        }
    }
    printf("\nTrace of the square matrix A = %d",sum);

    return 0;
}