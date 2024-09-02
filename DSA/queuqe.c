#include <stdio.h>

int front = -1;
int rear = -1;

void enqueue(int x, int n, int queue[])
{
    if (rear == n - 1)
    {
        printf("queue is empty");
    }
    else if (rear == -1 && front == -1)
    {
        rear = front = 0;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}

void dequeue(int queue[])
{
    if (rear == -1 && front == -1)
    {
        printf("queue is empty");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
}

void display(int queue[])
{
    if (rear == -1 && front == -1)
    {
        printf("no data found");
    }
    else
    {
        for (int i = front; i < rear + 1; i++)
        {
            printf("%d \t", queue[i]);
        }
        printf("\n");
    }
}

int main()
{
    int n = 5;
    int queue[n];

    enqueue(30, n, queue);
    enqueue(20, n, queue);
    enqueue(20, n, queue);
    printf("insertion in queue:");
    display(queue);
    printf("deletion in queue:");
    dequeue(queue);
    display(queue);
}