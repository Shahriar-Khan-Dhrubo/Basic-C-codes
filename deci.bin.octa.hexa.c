#include<stdio.h>
int main()
{
  int a;
  printf("Enter a decimal number : ");
  scanf(" %d", &a);
  //printf("Binary number is : %a", a); binary conversion is difficult, need to learn some advance programming.hexadecimal input is also difficult
  printf("Octal number is : %o", a);
  printf("\nHexadecimal number is : %x", a);
  return 0;

}
