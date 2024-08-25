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
struct Node *reverse_list(struct Node *head)
{
    struct Node *prev=NULL,*current=head,*next=NULL;
    while(current!=NULL)
    {
        //store
        next=current->next;
        //reverse
        current->next=prev;
        //propagation
        prev=current;
        current=next;
    }
    //no need to write while using return prev.If void return then it should be written head=prev;
    return prev;
}
int main()
{
    int num[]= {10,20,30,40,50};
    struct Node *head=create_linked_list(num,5);
    //traverse
    struct Node *current=head;
    while(current!=NULL)
    {
        printf("%d ",current->data);
        current=current->next;
    }
    //reverse
    struct Node *reverse_head=reverse_list(head);

    //reverse traverse
    printf("\n");
    while(reverse_head!=NULL)
    {

        printf("%d ",reverse_head->data);
        reverse_head=reverse_head->next;
    }
    //free
    struct Node *temp=reverse_head;
    while(temp!=NULL)
    {
        struct Node *next_node=temp->next;
        free(temp);
        temp=next_node;
    }

    return 0;
}
