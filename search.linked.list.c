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

int search_list(struct Node *head,int value)
{
    int index=1;
    //search
    struct Node *search=head;
    while(search!=NULL)
    {
        if(search->data==value)
        {
            return index;
        }
        index++;
        search=search->next;
    }
    return -1;
}
int main()
{
    int num[]= {10,20,30,40,50};
    struct Node *head=NULL;
    head=create_linked_list(num,5);

    //traverse
    struct Node *current=head;
    while(current!=NULL)
    {
        printf("%d ",current->data);
        current=current->next;
    }
    //searching
    printf("\n%d\n",search_list(head,45));

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
