#include<stdio.h>
int pair(const void *pa,const void *pb)
{
    int *a=(int *)pa;
    int *b=(int *)pb;
    if(a[0]==b[0]) return a[1]-b[1];
    else return a[0]-b[0];
}
int main()
{
    int n,i;
    scanf(" %d",&n);
    int a[n][2];
    for(i=0;i<n;i++)
    {
        scanf(" %d",&a[i][0]);
        a[i][1]=i;
    }
    for(i=0;i<n;i++)
    {
        printf("%d %d\n",a[i][0],a[i][1]);
    }
    qsort(a,n,sizeof(int)*2,pair);
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d %d\n",a[i][0],a[i][1]);
    }
    return 0;
}
