#include <stdio.h>
#define maxSize 100

void merge(int arr[], int left, int mid, int right)
{
  int i, j, k;
  int n1 = mid - left + 1;
  int n2 = right - mid;

  // Create temporary arrays
  int leftArr[n1], rightArr[n2];

  // Copy data to temporary arrays
  for (i = 0; i < n1; i++)
    leftArr[i] = arr[left + i];
  for (j = 0; j < n2; j++)
    rightArr[j] = arr[mid + 1 + j];

  // Merge the temporary arrays back into arr[left..right]
  i = 0;
  j = 0;
  k = left;
  while (i < n1 && j < n2)
  {
    if (leftArr[i] <= rightArr[j])
    {
      arr[k] = leftArr[i];
      i++;
    }
    else
    {
      arr[k] = rightArr[j];
      j++;
    }
    k++;
  }

  // Copy the remaining elements of leftArr[], if any
  while (i < n1)
  {
    arr[k] = leftArr[i];
    i++;
    k++;
  }

  // Copy the remaining elements of rightArr[], if any
  while (j < n2)
  {
    arr[k] = rightArr[j];
    j++;
    k++;
  }
}

// The subarray to be sorted is in the index range [left-right]
void mergeSort(int arr[], int left, int right)
{
  if (left < right)
  {

    // Calculate the midpoint
    int mid = left + (right - left) / 2;

    // Sort first and second halves
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    // Merge the sorted halves
    merge(arr, left, mid, right);
  }
}

int main()
{
  int arr[maxSize];
  int size;
  int n;
  printf("ENTER SIZE OF ARRAY : ");
  scanf("%d", &size);
  for (int i = 0; i < size; i++)
  {
    printf("ENTER ARRAY ELEMENT : ");
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }

  mergeSort(arr, 0, n - 1);

  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
  return 0;
}