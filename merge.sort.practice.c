#include<stdio.h>
void merge(int a[],int l,int m,int r)
{
    int i,j,k;
    int n1=m-l+1,n2=r-m;
    int L[n1],R[n2];
    for(i=0;i<n1;i++)
    {
        L[i]=a[l+i];
    }
    for(j=0;j<n2;j++)
    {
        R[j]=a[m+1+j];
    }
    i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
           a[k]=L[i];
           i++;
        }
        else
        {
            a[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k]=R[j];
        j++;
        k++;
    }
}
void merge_sort(int a[],int l,int r)
{
    if(l<r)
    {
        int m=l+(r-l)/2;
        merge_sort(a,l,m);
        merge_sort(a,m+1,r);
        merge(a,l,m,r);
    }
}
void print_array(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main()
{
    int array[]={12,34,7857,-857,-868,0,567,4,2424,56,-9768};
    int size=sizeof(array)/sizeof(array[0]);
    print_array(array,size);
    merge_sort(array,0,size-1);
    print_array(array,size);
    return 0;
}
