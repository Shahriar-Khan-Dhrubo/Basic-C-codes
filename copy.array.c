#include<stdio.h>
int main()
{
    int n,i;
    printf("How many numbers want to input : ");
    scanf(" %d",&n);
    int array1[n],array2[n];

    for(i=0;i<n;i++)
    {
        scanf(" %d",&array1[i]);
    }

    printf("Array1 :\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t",array1[i]);
    }

    //copying numbers from array1

    for(i=0;i<n;i++)
    {
        array2[i]=array1[i];
    }

    //showing array2
    printf("\nArray2 :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",array2[i]);
    }
    return 0;
}
