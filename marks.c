#include<stdio.h>
int main()
{
    int a;
    printf("Enter your marks :");
    scanf(" %d",&a);
    if(a<40)
        printf("Failed.Better Luck Next Time.");
    else if(a<50)
        printf("You got C.Need to do better.");
    else if(a<60)
        printf("You got B.Need to do better.");
    else if(a<80)
        printf("You got A.Good,need to do better.");
    else if(a<100)
        printf("You got A+.Very good.");
    else if(a==100)
        printf("Excellent.You got full marks");
    else
        printf("You have entered wrong number.");
    return 0;

}
