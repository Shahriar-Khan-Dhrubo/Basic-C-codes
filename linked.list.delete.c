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
void print_linked_list(struct Node *head)
{
    struct Node *current=head;
    while(current!=NULL)
    {
        printf("%d ",current->data);
        current=current->next;
    }
    printf("\n");
}
struct Node *delete_linked_list(struct Node *head,int data)
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
void free_memory(struct Node *new_head)
{
    struct Node *temp=new_head;
    while(temp!=NULL)
    {
        struct Node *next_node=temp->next;
        free(temp);
        temp=next_node;
    }
}
int main()
{
    int num[]={10,20,30,20,40,50};
    struct Node *head=NULL;
    head=create_linked_list(num,6);
    print_linked_list(head);
    struct Node *new_head=delete_linked_list(head,20);
    print_linked_list(new_head);
    free_memory(new_head);
    return 0;
}
