#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,count=0;

    scanf(" %d",&n);
    char string[n+1],ch;
    scanf(" %s",string);

    for(i=0; i<n; i++)
    {
        ch=string[i];
        if(ch==string[i+1])
            count++;
    }
    printf("%d",count);
    return 0;
}
