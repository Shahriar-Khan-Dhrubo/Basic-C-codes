#include<stdio.h>
int main()
{
    int n;
    printf("How many numbers want to use : ");
    scanf(" %d",&n);
    int num[n],i;

    for(i=0; i<n; i++)
    {
        scanf(" %d",&num[i]);
    }
    int max=num[0];

    for(i=1; i<n; i++)
    {
        if(max<num[i])
        {
            max=num[i];
        }
    }
    printf("Maximum number : %d",max);

    return 0;
}
