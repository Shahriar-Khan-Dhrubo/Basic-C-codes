#include<stdio.h>
#include<stdlib.h>
int compare(void const *a,void const *b)
{
    return (*(int *)a<*(int *)b ? -1:1);
}
int main()
{
    int array[]={1,1,1,1,2,3,5,6,8,8,3,1,0,2,5,5,5};
    int size=sizeof(array)/sizeof(array[0]);
    //original array
    for(int i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    qsort(array,size,sizeof(int),compare);
    //sorted array
    for(int i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    //frequency count
    int max=array[size-1];
    int frequency_array[max+1];
    //initializing all elements to 0
    for(int i=0;i<max+1;i++)
    {
        frequency_array[i]=0;
    }
    //frequency
    for(int i=0;i<size;i++)
    {
        frequency_array[array[i]]++;
    }
    for(int i=0;i<max+1;i++)
    {
        printf("%d ",frequency_array[i]);
    }
    printf("\n");
    return 0;
}
