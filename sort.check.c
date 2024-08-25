
//this method is easier than the previous method


#include<stdio.h>
#include<stdlib.h>
int f(int *q, int *w)
{
    return *q - *w;
}
int main()
{
    int a[6]= {1,1,3,5,4,5},l;
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0; i<n; i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\n");
    qsort(a,n,4,f);
    for (int i = 0; i < n; i++)
    {
        if (i==n-1 || a[i] != a[i + 1])
            a[l++] = a[i];
    }
    for(int i=0; i<l; i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\n");
    return 0;
}
