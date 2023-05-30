#include <stdio.h>
#include<conio.h>

void swap(int* a, int* b) {

    int temp = *a;

    *a = *b;

    *b = temp;

}

int partition(int arr[], int low, int high) {
    int j;
    int pivot = arr[high];

    int i = (low - 1);

    for (j = low; j <= high - 1; j++) {

        if (arr[j] < pivot) {

            i++;

            swap(&arr[i], &arr[j]);

        }

    }

    swap(&arr[i + 1], &arr[high]);

    return (i + 1);

}

void quickSort(int arr[], int low, int high) {

    if (low < high) {

        int pivotIndex = partition(arr, low, high);

        quickSort(arr, low, pivotIndex - 1);

        quickSort(arr, pivotIndex + 1, high);

    }

}

int main() {
    int i;
    int arr[] = {12, 145, 647, 879, 423, 31, 74, 203, 28, 7};

    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Before Sorting:\n");

    printf("Array: ");

    for ( i = 0; i < n; i++) {

	printf("%d ", arr[i]);

    }

    printf("\n");

    quickSort(arr, 0, n - 1);

    printf("\nAfter Sorting (Using Quick Sort):\n");

    printf("Sorted Array: ");

    for (i = 0; i < n; i++) {

	printf("%d ", arr[i]);

    }

    printf("\n");
    getch();
    return 0;


}