//sum of all elements of an array using recursion
#include <stdio.h>
 int sumArray(int arr[], int start, int len);
int main()
 { int arr[200];
     int N, i,x;
  printf("Enter size of the array: "); scanf("%d", &N);
 printf("Enter elements in the array: "); for(i=0; i<N; i++)
  { scanf("%d", &arr[i]); }
   printf("sum of all elements of an array:\n "); x=sumArray(arr, 0, N);
    printf("%d",x);
  return 0; }
 int sumArray(int arr[], int start, int len)
 {  if(start >= len)
    return 0;
   return (arr[start]+sumArray(arr, start + 1, len)); }
