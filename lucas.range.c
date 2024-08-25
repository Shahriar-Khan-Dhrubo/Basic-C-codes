#include<stdio.h>
int main()
{
    int range,first=2,second=1,lucas=0;
    printf("Enter range of Lucas series :");
    scanf(" %d",&range);
    printf("%d\t%d\t",first,second);

    while(lucas<=range)
    {
        lucas=first+second;
        first=second;
        second=lucas;
        if(lucas<=range)
            printf("%d\t",lucas);

    }

    return 0;
}
