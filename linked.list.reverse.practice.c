#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *create_linked_list(int array[],int size)
{
    struct Node *head=NULL,*temp=NULL,*current=NULL;
    int i;
    for(i=0;i<size;i++)
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
       next=current->next;
       current->next=prev;
       prev=current;
       current=next;
   }
   return prev;
}
int main()
{
    int num[]={10,20,30,40,50};
    struct Node *head=NULL;
    head=create_linked_list(num,5);
    //traverse
    struct Node *current=head;
    while(current!=NULL)
    {
        printf("%d ",current->data);
        current=current->next;
    }
    printf("\n");
    //Reverse Linked List
    struct Node *reversed_head=reverse_list(head);

    while(reversed_head!=NULL)
    {
        printf("%d ",reversed_head->data);
        reversed_head=reversed_head->next;
    }
    printf("\n");

    //free
    struct Node *temp=reversed_head;
    while(temp!=NULL)
    {
        struct Node *next_node=temp;
        free(temp);
        temp=next_node;
    }
        return 0;
}