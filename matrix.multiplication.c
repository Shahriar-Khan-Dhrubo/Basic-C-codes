#include<stdio.h>
int main()
{
    int r1,r2,c1,c2,i,j;


    printf("Enter row & column of first matrix : ");
    scanf(" %d %d",&r1,&c1);

    printf("Enter row & column of second matrix : ");
    scanf(" %d %d",&r2,&c2);

    int a[r1][c1],b[r2][c2];
//checking matrices for multiplication
    while(c1!=r2)
    {
        printf("\nError!!! Column of first matrix not equal to row of second matrix.\n");

        printf("Enter row & column of first matrix : ");
        scanf(" %d %d",&r1,&c1);

        printf("Enter row & column of second matrix : ");
        scanf(" %d %d",&r2,&c2);
    }
    printf("\nElements of first matrix : \n");
//first matrix
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf(" %d",&a[i][j]);
        }
    }
//printing first matrix
    printf("\nMatrix A =\t");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n\t\t");
    }
//second matrix
    printf("\nElements of second matrix :\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("B[%d][%d]= ",i,j);
            scanf(" %d",&b[i][j]);
        }
    }
//printing second matrix
    printf("\nMatrix B =\t");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n\t\t");
    }
//multiplication of first & second matrix
    int c[r1][c2],k,multi,sum=0;
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                multi=a[i][k]*b[k][j];
                sum=sum+multi;

            }
            c[i][j]=sum;
            sum=0;
        }
    }
//printing multiplied matrix
    printf("\nMultiplied matrix C =\t");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n\t\t\t");
    }

    return 0;
}
