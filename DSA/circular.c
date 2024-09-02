#include <stdio.h>

int front = -1;
int rear = -1;

void enqueue(int x, int n, int queue[])
{
    if (front == -1 && rear == -1)
    {
        rear = front = 0;
        queue[rear] = x;
    }
    else if ((rear + 1) % n == front)
    {
        printf("queue is overflow");
    }
    else
    {
        rear = (rear + 1) % n;
        queue[rear] = x;
    }
}

void dequeue(int queue[], int n)
{
    if (front == -1 && rear == -1)
    {
        printf("queue is underflow");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % n;
    }
}

void display(int queue[], int n)
{
    int i = front;
    if (front == -1 && rear == -1)
    {
        printf("queue is empty");
    }
    else
    {
        while (i != rear)
        {
            printf("%d \t", queue[i]);
            i = (i + 1) % n;
        }
        printf("%d", queue[rear]);
        printf("\n");
    }
}

int main()
{
    int n = 5;
    int queue[n];

    enqueue(10, n, queue);
    enqueue(20, n, queue);
    enqueue(30, n, queue);
    enqueue(40, n, queue);
    enqueue(50, n, queue);
    printf("insertion in queue:");
    display(queue, n);
    printf("\n");
    printf("deletion in queue:");
    dequeue(queue, n);
    display(queue, n);
    printf("\n");
    enqueue(60, n, queue);
    printf("insertion in queue:");
    display(queue, n);
}