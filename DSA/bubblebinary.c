#include <stdio.h>
#include <stdlib.h>

void display(int n, int stack[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", stack[i]);
    }
}

void bubble(int n, int stack[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (stack[j] > stack[j + 1])
            {
                int temp = stack[j];
                stack[j] = stack[j + 1];
                stack[j + 1] = temp;
            }
        }
    }
}

int binary(int stack[], int low, int high, int x)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (stack[mid] < x)
        {
            low = mid + 1;
        }
        else if (stack[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    int n = 5;
    int stack[n];

    for (int i = 0; i < n; i++)
    {
        stack[i] = (rand() % 50) + 1;
    }

    printf("Before sorting array elements are - \n");
    display(5, stack);
    printf("\n");
    printf("after sorting array elements are - \n");
    bubble(5, stack);
    display(5, stack);
    printf("\nAfter sorting binary search array elements are - \n");
    int result = binary(stack, 0, 5 - 1, 18);
    if (result == -1)
    {
        printf("element not found");
    }
    else
    {
        printf("element found in %d position", result);
    }
}