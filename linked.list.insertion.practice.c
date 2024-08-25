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
    else
    {
       struct Node *current=head;
       while(current->next!=NULL)
       {
           current=current->next;
       }
       current->next=end_insertion;
    }
    return head;
}
void memory_free(struct Node *head)
{
    struct Node *temp=head;
    while(temp!=NULL)
    {
        struct Node *next_node=temp;
        free(temp);
        temp=next_node;
    }
}
int main()
{
    int num[]={20,30,40};
    struct Node *head=create_linked_list(num,3);

    //traverse linked list
    struct Node *current=head;
    while(current!=NULL)
    {
        printf("%d ",current->data);
        current=current->next;
    }
    printf("\n");

    //Insertion at beginning
    head=insert_at_beginning(head,10);
    struct Node *new_head=head;
    while(new_head!=NULL)
    {
        printf("%d ",new_head->data);
        new_head=new_head->next;
    }
    printf("\n");

    //Insertion at end
    head=insert_at_end(head,50);
    struct Node *end_insertion=head;
    while(end_insertion!=NULL)
    {
        printf("%d ",end_insertion->data);
        end_insertion=end_insertion->next;
    }

    //free memory
    memory_free(head);
    return 0;
}
