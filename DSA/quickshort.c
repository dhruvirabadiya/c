#include <stdio.h>
#define n 6
int array[n];

int quickshort(int arr[], int start, int end)
{
    int pivot = arr[end];
    int i = (start - 1);

    for (int j = start; j <= end - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[end];
    arr[end] = temp;

    return (i + 1);
}

void quick(int arr[], int start, int end)
{
    if (start < end)
    {
        int p = quickshort(arr, start, end);
        quick(arr, start, p - 1);
        quick(arr, p + 1, end);
    }
}

void display(int array[])
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d \t", array[i]);
    }
}

int main()
{
    int arr[6] = {12, 31, 25, 8, 32, 10};

    printf("Before sorting array elements are - \n");
    display(arr);
    quick(arr, 0, 6 - 1);
    printf("\nAfter sorting array elements are - \n");
    display(arr);
}