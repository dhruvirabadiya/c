#include <stdio.h>

int main()
{
     int n;

     printf("Enter the value of n: ");
     scanf("%d", &n);

     int arr[n]; // Declaring the array after reading n

     // Input array elements
     for (int i = 0; i < n; i++)
     {
          printf("Enter the array element at index %d: ", i);
          scanf("%d", &arr[i]);
     }

     // Swapping the first and last elements
     int temp = arr[0];
     arr[0] = arr[n - 1];
     arr[n - 1] = temp;

     // Printing the array after swapping
     printf("Array after swapping: ");
     for (int i = 0; i < n; i++)
     {
          printf("%d ", arr[i]);
     }
     printf("\n");

     return 0;
}
