#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[10]="DHRUBO";
    char b[10]="AVA";
    char c[10];
    printf("Before swapping:\n");
    printf("\nString A = %s",a);
    printf("\nString B = %s\n",b);
//string swapping
    strcpy(c,a);
    strcpy(a,b);
    strcpy(b,c);
//printing swapped dtrings
    printf("\nAfter swapping:\n");
    printf("\nString A = %s",a);
    printf("\nString B = %s\n",b);
//printing lowercase
    for(int i=0; i<strlen(a); i++)
    {
        a[i]=tolower(a[i]);
    }
    a[strlen(a)]='\0';
    printf("\n%s",a);
    for(int i=0; i<strlen(b); i++)
    {
        b[i]=tolower(b[i]);
    }
    b[strlen(b)]='\0';
    printf("\n%s",b);
    return 0;
}
