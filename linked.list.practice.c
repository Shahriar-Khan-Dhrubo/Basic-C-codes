#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *create_linked_list(int array[],int size)
{
    int i;
    struct Node *head=NULL,*temp=NULL,*current=NULL;
    for(i=0; i<size; i++)
    {

        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=array[i];
        temp->next=NULL;

        if(head==NULL)
        {
            head=temp;
            current=temp;
        }
        else
        {
            current->next=temp;
            current=current->next;
        }
    }
    return head;
}
int main()
{
    int num[]= {10,20,30};
    struct Node *head=NULL;
    head=create_linked_list(num,3);

    //traverse node
    struct Node *current=head;
    while(current!=NULL)
    {
        printf("%d ",current->data);
        current=current->next;
    }
    //free
    struct Node *temp=head;
    while(temp!=NULL)
    {
        struct Node *next_node=temp->next;
        free(temp);
        temp=next_node;
    }

    return 0;
}
