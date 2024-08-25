#include<stdio.h>
#include<string.h>
int main()
{
    char ch;
    int asci;
    scanf(" %c",&ch);

    printf("%c\n",ch);
    printf("%d\n",ch);
    asci = (int) ch;
    printf("%d",asci);
    return 0;
}
