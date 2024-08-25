#include<stdio.h>
int main()
{
    int marks[6],i;

    for(i=0; i<=5; i++)
    {
        scanf("%d",&marks[i]);

    }
    for(i=0;i<=5;i++)
    printf("%d\t",marks[i]);
    return 0;
}
