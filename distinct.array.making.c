#include<stdio.h>
#include<stdlib.h>
int com(void const *a,void const *b)
{
    return (*(int *)a < *(int *)b ? -1:1);
}
void remove_duplicate(int a[],int *n)
{
    if(*n<=1)
        return;
    int index=1,i,j;
    for(i=1;i<*n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(a[i]==a[j])
                break;
        }
        if(j==i)
            a[index++]=a[i];
    }
    *n=index;
}
void printing_array(int a[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main()
{
    int n;
    scanf(" %d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf(" %d",&a[i]);
    }
    //int size=sizeof(a)/sizeof(a[0]);
    qsort(a,n,sizeof(int),com);

    printing_array(a,n);

    remove_duplicate(a,&n);

    printing_array(a,n);
    return 0;
}
