#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],ch;
    int i,capital,small,other;
    i=capital=small=other=0;
    printf("Enter a string = ");
    fgets(a,sizeof(a),stdin);
   // a[strcspn(a, "\n")] = '\0';

    while((ch=a[i])!='\0')
    {
        if(ch>='A' && ch<='Z')
            capital++;
        else if(ch>='a' && ch<='z')
            small++;
        else
            other++;
        i++;
    }
    printf("Number of capital letters = %d\n",capital);
    printf("Number of small letters = %d\n",small);
    printf("Number of other characters = %d\n",other);
    return 0;
}
