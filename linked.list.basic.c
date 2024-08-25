#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
int main()
{
    struct Node *a=NULL;
    struct Node *b=NULL;
    struct Node *c=NULL;

    a=(struct Node*)malloc(sizeof(struct Node));
    b=(struct Node*)malloc(sizeof(struct Node));
    c=(struct Node*)malloc(sizeof(struct Node));

    a->data=10;
    a->next=b;
    b->data=20;
    b->next=c;
    c->data=30;
    c->next=NULL;

    //traverse linked list
    struct Node *current=a;
    while(current!=NULL)
    {
        printf("%d ",current->data);
        current=current->next;
    }
    free(a);
    free(b);
    free(c);
    return 0;
}
