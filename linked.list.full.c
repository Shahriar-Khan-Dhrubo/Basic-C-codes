#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *create_linked_list(int array[],int size);
void print_list(struct Node *head);
void memory_free(struct Node *head);
struct Node *insertion_at_beginning(struct Node *head,int data);
struct Node *insertion_at_end(struct Node *head,int data);
struct Node *insertion_at_middle(struct Node *head,int position,int data);
struct Node *delete_node(struct Node *head,int data);
int main()
{
    int num[]= {0,10,20,30,40,20,50};
    struct Node *head=create_linked_list(num,7);
    //printing first linked list
    print_list(head);
    //insert at beginning
    struct Node *new_head=insertion_at_beginning(head,10);
    print_list(new_head);
    //insert at end
    /*new_head=*/insertion_at_end(new_head,60);
    print_list(new_head);
    //insert at middle
    /*new_head=*/insertion_at_middle(new_head,2,0);
    print_list(new_head);
    //deletion
    new_head=delete_node(new_head,60);
    print_list(new_head);
    //memory free
    memory_free(new_head);
    new_head=NULL;
    return 0;
}
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
void print_list(struct Node *head)
{
    struct Node *current=head;
    while(current!=NULL)
    {
        printf("%d ",current->data);
        current=current->next;
    }
    printf("\n");
}
void memory_free(struct Node *head)
{
    struct Node *temp=head;
    while(temp!=NULL)
    {
        struct Node *next_node=temp->next;
        free(temp);
        temp=next_node;
    }
}
struct Node *insertion_at_beginning(struct Node *head,int data)
{
    struct Node *new_head=(struct Node*)malloc(sizeof(struct Node));
    new_head->data=data;
    new_head->next=head;
    return new_head;
}
struct Node *insertion_at_end(struct Node *head,int data)
{
    struct Node *end_insertion=(struct Node*)malloc(sizeof(struct Node));
    end_insertion->data=data;
    end_insertion->next=NULL;
    //creating link for the last insertion to the previous list
    struct Node *current=head;
    //checking while list was empty.
    if(current==NULL)
    {
        return end_insertion;
    }
    //while list was not empty.remember to use current->next not current in the loop condition
    while(current->next!=NULL)
    {
        current=current->next;
    }
    current->next=end_insertion;
    return head;
}
struct Node *insertion_at_middle(struct Node *head,int position,int data)
{
    struct Node *temp=head;
    int counter=0;
    while(temp!=NULL)
    {
        counter++;
        if(counter==position)
        {
            struct Node *middle_node=(struct Node*)malloc(sizeof(struct Node));
            middle_node->data=data;
            middle_node->next=temp->next;
            temp->next=middle_node;
        }
        temp=temp->next;
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
