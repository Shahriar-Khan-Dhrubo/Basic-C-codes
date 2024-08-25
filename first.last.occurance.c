#include<stdio.h>
int main()
{
    int n;
    scanf(" %d",&n);
    int a[n];
    int first=-1,end=-1;
    for(int i=0;i<n;i++)
    {
        scanf(" %d",&a[i]);
        if(a[i]==1 && first==-1)
            first=i;
        else if(a[i]==1)
            end=i;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n%d %d\n",first,end);
    return 0;
}
