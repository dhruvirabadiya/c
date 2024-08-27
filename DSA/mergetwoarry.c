#include <stdio.h>

int main()
{
   int n, n1, n2;

   // Input size of first array
   printf("Enter the value of n (size of first array): ");
   scanf("%d", &n);
   int a[n]; // Declaring array 'a' with size 'n'

   // Input elements of first array
   for (int i = 0; i < n; i++)
   {
      printf("Enter the value of array1 at position %d: ", i);
      scanf("%d", &a[i]);
   }

   // Input size of second array
   printf("Enter the value of n1 (size of second array): ");
   scanf("%d", &n1);
   int a1[n1]; // Declaring array 'a1' with size 'n1'

   // Input elements of second array
   for (int j = 0; j < n1; j++)
   {
      printf("Enter the value of array2 at position %d: ", j);
      scanf("%d", &a1[j]);
   }

   // Size of the merged array
   n2 = n + n1;
   int a2[n2]; // Declaring merged array 'a2'

   // Merging array 'a' and 'a1' into 'a2'
   for (int i = 0; i < n; i++)
   {
      a2[i] = a[i];
   }

   for (int j = 0; j < n1; j++)
   {
      a2[n + j] = a1[j];
   }

   // Printing the merged array
   printf("Merged array is: ");
   for (int i = 0; i < n2; i++)
   {
      printf("%d ", a2[i]);
   }
   printf("\n");

   return 0;
}
