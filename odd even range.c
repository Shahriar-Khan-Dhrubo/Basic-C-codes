#include<stdio.h>
int main()
{
    int i;
    printf("Odd numbers from 1 to 10 :\n");

    for( i=1 ; i<=10 ; i=i+2)
        printf("%d\n",i);

    printf("Even numbers from 1 to 10 :\n");

    for( i=2 ; i<=10 ; i=i+2)
        printf("%d\n",i);

    return 0;
}
