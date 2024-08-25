#include<stdio.h>
#include<stdbool.h>
#define capacity 5
int queue[capacity];
int front=0;rear=-1;total_Item=0;

bool isFull()
{
    if(total_Item==capacity)
    {
        return true;
    }
    return false;
}
bool isEmpty()
{
    if(total_Item==0)
    {
        return true;
    }
    return false;
}
void enqueue(int item)
{
    if(isFull())
        {
            printf("Sorry!!! No space.\n");
            return;
        }
    rear=(rear+1)% capacity;
    queue[rear]=item;
    total_Item++;
}
int dequeue()
{
    if(isEmpty())
    {
        printf("Sorry!!! Queue is empty.\n");
        return -1;
    }
    int front_Item= queue[front];
    queue[front]=-1;
    front=(front+1)%capacity;
    total_Item--;
    return front_Item;
}
void queuePrint()
{
    int i;
    printf("Queue : ");
    for(i=0;i<capacity;i++)
    {
        printf("%d ",queue[i]);
    }
    printf("\n");
}
int main()
{
    printf("Queue implementation.\n");
    enqueue(10);
    queuePrint();
    enqueue(20);
    queuePrint();
    enqueue(30);
    queuePrint();
    enqueue(40);
    queuePrint();
    enqueue(50);
    queuePrint();
    enqueue(60);
    queuePrint();
    printf("Dequeued = %d\n",dequeue());
    queuePrint();
    enqueue(70);
    queuePrint();

    return 0;
}





/*
#include<stdio.h>
#include<stdbool.h>
#define capacity 5
int queue[capacity];
int front=0,rear=-1,total_item=0;

bool isFull()
{
    if(total_item==capacity)
    {
        return true;
    }
    return false;
}
bool isEmpty()
{
    if(total_item==0)
    {
        return true;
    }
    return false;
}
void enqueue(int item)
{
    if(isFull())
    {
        printf("Sorry!!! No space.\n");
        return;
    }
    rear=(rear+1)% capacity;
    queue[rear]=item;
    total_item++;
}
int dequeue()
{
    if(isEmpty())
    {
        printf("Sorry!!!Queue is empty.\n");
        return -1;
    }
    int frontItem = queue[front];
    queue[front]=-1;
    front=(front+1)% capacity;
    total_item--;
    return frontItem;
}
void QueuePrint()
{
    int i;
    printf("Queue : ");
    for(i=0;i<capacity;i++)
    {
        printf("%d ",queue[i]);
    }
    printf("\n");
}
int main()
{
    printf("Queue implementation.\n");
    enqueue(10);
    QueuePrint();
    enqueue(20);
    QueuePrint();
    enqueue(30);
    QueuePrint();
    enqueue(40);
    QueuePrint();
    enqueue(50);
    QueuePrint();
    enqueue(60);
    QueuePrint();
    printf("Dequeued : %d\n",dequeue());
    QueuePrint();
    enqueue(70);
    QueuePrint();
    return 0;
}*/

