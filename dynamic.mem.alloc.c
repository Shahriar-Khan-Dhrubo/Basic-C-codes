#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr1,*ptr2;
    ptr1=(int*)malloc(5*sizeof(int));
    ptr2=(int*)calloc(5,sizeof(int));
    if(ptr1==NULL || ptr2==NULL)
    {
        printf("Memory allocation unsuccessful.\n");
    }
    else
    {
        printf("Memory allocation successful.\n");
    }
    ptr1=realloc(ptr1,50*sizeof(int));
    ptr2=realloc(ptr2,50*sizeof(int));
    if(ptr1==NULL || ptr2==NULL)
    {
        printf("Memory allocation unsuccessful.\n");
    }
    else
    {
        printf("Memory allocation successful.\n");
    }
    free(ptr1);
    free(ptr2);
    printf("Memory freed.\n");
    return 0;
}
