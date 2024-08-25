#include<stdio.h>
int main()
{
    int x,count=0;
    scanf(" %d",&x);
    if(x%5==0)
        printf("%d",x/5);
    else if(x%5!=0)
        printf("%d",(x/5)+1);
    return 0;
}
