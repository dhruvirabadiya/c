#include <stdio.h>
#include <stdlib.h>

void selection(int stack[], int x)
{
    int small;
    for (int i = 0; i < x - 1; i++)
    {
        small = i;
        for (int j = i + 1; j < x; j++)
        {
            if (stack[j] < stack[small])
            {
                small = j;
            }
        }
        int temp = stack[small];
        stack[small] = stack[i];
        stack[i] = temp;
    }
}

void display(int stack[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", stack[i]);
    }
}

int main()
{
    int n = 5;
    int stack[n];

    for (int i = 0; i < n; i++)
    {
        stack[i] = (rand() % 100) + 1;
    }

    printf("Before sorting array elements are - \n");
    display(stack, n);
    printf("\n");
    printf("after sorting array elements are - \n");
    selection(stack, n);
    display(stack, n);
}