#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *creating_linked_list(int array[],int size)
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
int main()
{
    int num[]={10,20,30,40,50};
    struct Node *head=NULL;
    head=creating_linked_list(num,5);

    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    struct Node *current=head;
    while(current!=NULL)
    {
        struct Node *temp=current;
        current=current->next;
        free(temp);
    }
    return 0;
}