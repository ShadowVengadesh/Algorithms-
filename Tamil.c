#include <stdio.h>
#include<conio.h>

void insertionSort(int arr[], int n) {
int i;
    for ( i = 1; i < n; i++) {

        int key = arr[i];

        int j = i - 1;

        while (j >= 0 && arr[j] > key) {

            arr[j + 1] = arr[j];

            j--;

        }

        arr[j + 1] = key;

    }

}

int main() {
int i;
    int arr[] = {12, 45, 78, 96, 56, 77, 51, 8, 104, 96};

    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Before Sorting:\n");

    printf("Array: ");

    for ( i = 0; i < n; i++) {

        printf("%d ", arr[i]);

    }

    printf("\n");

    insertionSort(arr, n);

    printf("\nAfter Sorting (Using Insertion Sort):\n");

    printf("Sorted Array: ");

    for ( i = 0; i < n; i++) {

        printf("%d ", arr[i]);

    }

    printf("\n");
    getch();
    return 0;

}
