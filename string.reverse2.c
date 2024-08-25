#include<stdio.h>
int main()
{
    char a[10]="DHRUBO";
    char b[10];
    int i=0,count=0;

    while(a[i]!='\0')
    {
        count++;
        i++;
    }
    int j;
    for(j=0,i=count-1;i>=0;i--,j++)
    {
        b[j]=a[i];
    }
    b[j]='\0';
    printf("%s",b);
    return 0;
}
