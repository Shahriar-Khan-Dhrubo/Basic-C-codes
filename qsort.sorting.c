#include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b)
{
    return (*(int *)a-*(int *)b);
}
void print_array(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main()
{
    int array[]={20,25,67,0,-45,-6,-789};
    int size=sizeof(array)/sizeof(array[0]);
    print_array(array,size);
    qsort(array,size,sizeof(int),compare);
    print_array(array,size);
    return 0;
}
