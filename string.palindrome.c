#include<stdio.h>
#include<string.h>
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
    for(j=0;j<count;j++)
    {
        b[j]=a[count-j-1];
    }
    b[count]='\0';
    int d= strcmp(a,b);
    if(d!=0)
        printf("Not palindrome string.");
    else
        printf("Palindrome string.");
    return 0;
}
