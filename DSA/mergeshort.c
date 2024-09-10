#include <stdio.h>

#define n 6
int array[n];

void merge(int arr[], int ub, int mid, int lb)
{
    int i, j, k;
    int n1 = mid - ub + 1;
    int n2 = lb - mid;

    int leftarray[n1], rightarray[n2];

    for (int i = 0; i < n1; i++)
        leftarray[i] = arr[ub + i];

    for (int j = 0; j < n2; j++)
        rightarray[j] = arr[mid + 1 + j];

    i = 0;
    j = 0;
    k = ub;

    while (i < n1 && j < n2)
    {
        if (leftarray[i] <= rightarray[j])
        {
            arr[k] = leftarray[i];
            i++;
        }
        else
        {
            arr[k] = rightarray[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = leftarray[i];
        i++;
        k++;
    }

    while (i < n2)
    {
        arr[k] = rightarray[j];
        j++;
        k++;
    }
}

void mergeshort(int arr[], int ub, int lb)
{
    if (ub < lb)
    {
        int mid = (ub + lb) / 2;
        mergeshort(arr, ub, mid);
        mergeshort(arr, mid + 1, lb);
        merge(arr, ub, mid, lb);
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
    int arr[6] = {12, 31, 25, 8, 32,10};

    printf("before sorting elements: \n");
    display(arr);
    printf("\n");
    printf("after sorting elements: \n");
    mergeshort(arr, 0, 6 - 1);
    display(arr);
}