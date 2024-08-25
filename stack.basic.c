#include<stdio.h>
#define capacity 3
int top=-1;
int stack[capacity];

void push(int x)
{
    if(top<capacity-1)
    {
        top++;
        stack[top]=x;
        printf("Successfully added item = %d\n",x);
    }
    else
        printf("No space!!!\n");
}
int pop()
{
    if(top>=0)
    {
        int value = stack[top];
        top--;
        return value;
    }
    else
    {
        printf("Empty stack.\n");
        return -1;
    }
}
int peek()
{
    if(top>=0)
    {
        int val = stack[top];
        return val;
    }
    else
    {
        printf("Empty stack.\n");
        return -1;
    }
}
int main()
{
    printf("Implementing my stack in C.\n");
    peek();
    push(10);
    push(20);
    push(30);
    push(40);
    //pop();
    printf("Top of the stack = %d\n",pop());
    push(50);
    //peek();
    printf("Top of the stack = %d\n",peek());
    push(60);
    return 0;
}
