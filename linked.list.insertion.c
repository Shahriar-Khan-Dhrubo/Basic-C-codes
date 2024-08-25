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
    struct Node *head=NULL,*current=NULL,*temp=NULL;
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
struct Node *insert_at_beginning(struct Node *head,int data)
{
    struct Node *new_head=(struct Node*)malloc(sizeof(struct Node));
    new_head->data=data;
    new_head->next=head;
    return new_head;
}
struct Node *insert_at_end(struct Node *head,int data)
{
    struct Node *end_insertion=(struct Node*)malloc(sizeof(struct Node));
    end_insertion->data=data;
    end_insertion->next=NULL;

    if(head==NULL)
    {
        return end_insertion;
    }


    struct Node *current=head;
    while(current->next!=NULL)
    {
        current=current->next;
    }

    current->next=end_insertion;
    return head;
}
int main()
{
    int num[]= {10,20,30,40};
    struct Node *head=create_linked_list(num,4);
    //traverse linked list
    struct Node *current=head;
    while(current!=NULL)
    {
        printf("%d ",current->data);
        current=current->next;
    }
    head=insert_at_beginning(head,0);
    //new_head
    struct Node *new_head=head;
    printf("\n");
    while(new_head!=NULL)
    {
        printf("%d ",new_head->data);
        new_head=new_head->next;
    }
    //Insertion at the end
    head=insert_at_end(head,50);
    struct Node *end_insertion=head;
    printf("\n");
    while(end_insertion!=NULL)
    {
        printf("%d ",end_insertion->data);
        end_insertion=end_insertion->next;
    }
    //free
    struct Node *clear_node=end_insertion;
    while(clear_node!=NULL)
    {
        struct Node *next_node=clear_node;
        free(clear_node);
        clear_node=next_node;
    }
    return 0;
}
