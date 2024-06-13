#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  int n, j, d, ij;
  clock_t start_t, end_t;
  double total_t;
  printf("Enter the size of array::");
  scanf("%d", &n);
  int arr[n], i;
  for (i = 0; i < n; i++)
    arr[i] = rand() % n;

  start_t = clock();
  printf("\nStarting of the program, start_t = %ld\n", start_t);

  for (int ij = 0; ij < n - 1; ij++)
  {
    for (int j = 0; j < n - ij - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {

        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  printf(" \n after implementing Bubble sort: \n");
  for (int i = 0; i < n; i++)
  {
    printf("%d  ", arr[i]);
  }
  end_t = clock();
  printf("end_t = %ld\n", end_t);

  total_t = (double)(end_t - start_t);
  printf("Total time taken by CPU: %f\n", total_t);
  return 0;
}