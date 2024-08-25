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
struct Node *insert_in_middle(struct Node *head,int position,int data)
{
    struct Node *temp=head;
    int counter=0;
    while(temp!=NULL)
    {
        counter++;
        if(counter==position)
        {
            struct Node *new_node=NULL;
            new_node=(struct Node*)malloc(sizeof(struct Node));
            new_node->data=data;
            new_node->next=temp->next;
            temp->next=new_node;
        }

        temp=temp->next;

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
void free_memory(struct Node *head)
{
    struct Node *temp=head;
    while(temp!=NULL)
    {
        struct Node *next=temp->next;
        free(temp);
        temp=next;
    }
}
int main()
{
    int num[]= {10,20,40,50,60};
    struct Node *head=NULL;
    head=create_linked_list(num,5);
    print_linked_list(head);
    insert_in_middle(head,2,30);
    print_linked_list(head);
    free(head);
    head=NULL;
    return 0;
}
