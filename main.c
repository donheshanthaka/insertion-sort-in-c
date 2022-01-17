#include <stdio.h>
#include <stdlib.h>

// Insertion sort array
void insertionSort(int arr[], int n)
{
    int i, value, j;
    for (i = 1; i < n; i++) {
        value = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > value) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = value;
    }
}

// Function prints the elements of the array
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


int main()
{
    int arr[] = { 647, 31, 1, 6812, -11};
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
    printf("\nUnsorted array: ");
    printArray(arr, sizeOfArray);
    insertionSort(arr, sizeOfArray);
    printf("\nSorted array: ");
    printArray(arr, sizeOfArray);

    return 0;
}
