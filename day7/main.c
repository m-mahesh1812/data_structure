#include<stdio.h>
#include<stdlib.h>
#include<queue.h>
void addq( int front,int rear, element item)
{
    rear =(rear+1)%MAX_QUEUE_SIZE;
    if(front==rear)
        return;
    queue[rear]=item;
}
void deleteq( int front,int rear, element item)
{
    element item;
    if(front==rear)
        return queue_emppty();
    front=(front+1)%MAX_QUEUE_SIZE;
    return queue[front];
}
void display()
{
int front_pos = front,rear= rear;
if(front == -1)
{
    printf("Queue is empty");
    return;
}
printf("Queue elements :n");
if( front<= rear )
    while(front<= rear)
    {
        printf("%d ",cqueue_arr[front]);
        front_pos++;
    }
else
{
    while(front_pos <= MAX-1)
    {
        printf("%d ",cqueue_arr[front])
        frontpos++;
    }
    front_pos = 0;
    while(front_pos <= rear)
    {
        printf("%d ",cqueue_arr[front]);
        front++;
    }
}
printf("n");
}
