#include<stdio.h>
int main()
{
    int i=1;

    print:
        printf("%d\t\t",i);
        i++;
    if(i<5)
        goto print;

    return 0;
}
