#include <stdio.h>
int main()
{
   int array[100], position, i, n, value;

   printf("Enter number of elements in array: \n");
   scanf("%d", &n);

   printf("Enter %d elements: \n", n);

   for (i = 0; i < n; i++){
      scanf("%d", &array[i]);
   }

   printf("Enter the Position: \n");
   scanf("%d", &position);

   printf("Enter New Element: \n");
   scanf("%d", &value);

   for (i = n - 1; i >= position - 1; i--){
      array[i+1] = array[i];
   }

   array[position-1] = value;

   printf("Array After Insertion: \n");

   for (i = 0; i <= n; i++)
      printf("%d\n", array[i]);

   return 0;
   }
