#include <stdio.h>
#include <stdlib.h>

#define n 5

int stack[n];

int search(int x)
{

    for (int i = 0; i < n; i++)
    {
        if (stack[i] == x)
        {
            return i;
        }
    }
    return 0;
}

void display()
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", stack[i]);
    }
}

int main()
{
    for (int i = 0; i < n; i++)
    {
        stack[i] = (rand() % 50) + 1;
    }
    display();
    printf("\n");
    int index = search(20);
    if (index == 0)
    {
        printf("element not found");
    }
    else
    {
        printf("elment found in %d position", index);
    }
}