#include<stdio.h>
#include<stdlib.h>
int compare(void const *a,void const *b)
{
    //return (*(int *)a-*(int *)b);
    return (*(int *)a < *(int *)b ? -1 : 1);//more readable than the previous one and clarify the intent of using this
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
    int array[]={24,255,74636,0,4796,65,7,-75,-5652,-42313,0,1,1};
    int size=sizeof(array)/sizeof(array[0]);
    print_array(array,size);
    qsort(array,size,sizeof(int),compare);
    print_array(array,size);
    return 0;
}
