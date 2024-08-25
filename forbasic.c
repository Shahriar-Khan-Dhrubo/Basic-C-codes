#include<stdio.h>
int main()
{
    int i;
    for(i=1 ; i<=5 ; i++)
    {
        printf("Starting for loop.\n");
        printf("%d\n",i);
    }
    int j=1;
    while(j<=5)
    {
        printf("Starting while loop.\n");
        printf(" %d\n",j);
        j++;
    }
    int k=1;
    do
    {
        printf("Starting do while loop.\n");
        printf("%d\n",k);
        k++;
    }while(k<=3);
    return 0;

}
