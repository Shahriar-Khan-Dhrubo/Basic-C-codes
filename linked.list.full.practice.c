#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *creating_linked_list(int array[],int size);
void printing_list(struct Node *head);
struct Node *insert_at_start(struct Node *head,int data);
struct Node *insert_at_end(struct Node *head,int data);
struct Node *insert_at_middle(struct Node *head,int position,int data);
struct Node *delete_node(struct Node *head,int data);
int main()
{
    int num[]= {10,20,30,40,50};
    struct Node *head=NULL;
    head=creating_linked_list(num,5);
    printing_list(head);
    struct Node *new_head=insert_at_start(head,0);
    printing_list(new_head);
    insert_at_end(new_head,60);
    printing_list(new_head);
    insert_at_middle(new_head,1,10);
    printing_list(new_head);
    new_head=delete_node(new_head,0);
    printing_list(new_head);
    free_memory(new_head);
    new_head=NULL;
    return 0;
}
struct Node *creating_linked_list(int array[],int size)
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
void printing_list(struct Node *head)
{
    struct Node *current=head;
    while(current!=NULL)
    {
        printf("%d ",current->data);
        current=current->next;
    }
    printf("\n");
}
struct Node *insert_at_start(struct Node *head,int data)
{
    struct Node *new_head=(struct Node*)malloc(sizeof(struct Node));
    new_head->data=data;
    new_head->next=head;
    return new_head;
}
struct Node *insert_at_end(struct Node *head,int data)
{
    struct Node *end_node=(struct Node*)malloc(sizeof(struct Node));
    end_node->data=data;
    end_node->next=NULL;
    if(head==NULL)
    {
        return end_node;
    }
    struct Node *current=head;
    while(current->next!=NULL)
    {
        current=current->next;
    }
    current->next=end_node;
    return head;
}
struct Node *insert_at_middle(struct Node *head,int position,int data)
{
    struct Node *middle_node=(struct Node*)malloc(sizeof(struct Node));
    middle_node->data=data;
    int counter=0;
    struct Node *current=head;
    while(current!=NULL)
    {
        counter++;
        if(counter==position)
        {
            middle_node->next=current->next;
            current->next=middle_node;
            break;
        }
        current=current->next;
    }
    return head;
}
struct Node *delete_node(struct Node *head,int data)
{
    struct Node *dummy_head=(struct Node*)malloc(sizeof(struct Node));
    dummy_head->next=head;
    struct Node *current=dummy_head;
    while(current->next!=NULL)
    {
        if(current->next->data==data)
        {
            struct Node *temp=current->next;
            current->next=current->next->next;
            free(temp);
        }
        else
        {
            current=current->next;
        }
    }
    return dummy_head->next;
}
void free_memory(struct Node *head)
{
    struct Node *temp=head;
    while(temp!=NULL)
    {
        struct Node *next_node=temp->next;
        free(temp);
        temp=next_node;
    }
}
