#include<stdio.h>
#include<stdlib.h>
void merge(int a[],int l,int m,int r)
{
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;
    //creating two separate temporary array
    int L[n1],R[n2];
    //copying data in the temporary arrays
    for(i=0;i<n1;i++)
    {
       L[i]=a[l+i];
    }
    for(j=0;j<n2;j++)
    {
        R[j]=a[m+1+j];
    }
    //sorting and merging
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
    //adding extra element if there is any
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
//merge sorting portion
void merge_sort(int a[],int l,int r)
{
    if(l<r)
    {
        int m=l+(r-l)/2;
        //merge sorting 2 portions
        merge_sort(a,l,m);
        merge_sort(a,m+1,r);
        //merging portion
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
    int array[]={12,34,23,54,-24,0,-3};
    int size=sizeof(array)/sizeof(array[0]);
    print_array(array,size);
    merge_sort(array,0,size-1);
    print_array(array,size);
    return 0;
}
