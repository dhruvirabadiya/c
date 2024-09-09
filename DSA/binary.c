#include <stdio.h>

#define n 5

int stack[n];

int search(int arr[], int low, int high, int x)
{

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else if (arr[mid] > x)
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

void display(int stack[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", stack[i]);
    }
}

int main()
{

    int arr[5] = {12, 15, 25, 50, 55};
    display(arr);
    printf("\n");
    int result = search(arr, 0, 5 - 1, 50);
    if (result == -1)
    {
        printf("element not found");
    }
    else
    {
        printf("element found in %d position", result);
    }
}