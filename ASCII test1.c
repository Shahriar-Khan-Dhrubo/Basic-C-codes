/* conveting ascii number to ascii character
   & vice-versa
*/

#include<stdio.h>
void main()
{
    int a;
    char b;
    printf("Enter an ASCII number :");
    scanf("%d", &a);
    printf("ASCII character is : %c\n",a);
    printf("Enter an ASCII character :");
    scanf(" %c", &b);
    printf("ASCII number is : %d",b);
    getch();
    return 0;
}
