#include<iostream>
using namespace std;

#define N 3
int arr[N] = {1, 2, 3};


void prem(int *arr, int i, int n)
{
  int j;
  if (i == n)
  {
    for (j = 0; j < N; j++)
      printf("%d ", arr[j]);
    printf("\n");
  }
  else
  {
    for (j = i; j <= n; j++)
    {
      swap(arr[i], arr[j]);
      prem(arr, i + 1, n);
      swap(arr[i], arr[j]);
    }
  }
}

int main(void)
{
  int i = 0;
  prem(arr, 0, N-1);
  printf("---------------------\n");
  for (i = 0; i < N; i++)
    printf("%d ", arr[i]);
  printf("\n");

  return 0;
}