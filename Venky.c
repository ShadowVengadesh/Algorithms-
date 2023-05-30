#include <stdio.h>
#include<conio.h>

// Structure to store the minimum and maximum numbers

struct MinMax {

    int min;

    int max;

};

// Function to find the minimum and maximum numbers in a list

struct MinMax findMinMax(int arr[], int low, int high) {

    struct MinMax result, left, right, mid;

    int midIndex;

    // Base case: If the list contains only one element

    if (low == high) {

        result.min = arr[low];

        result.max = arr[high];

        return result;

    }

    // Base case: If the list contains two elements

    if (high - low == 1) {

        if (arr[low] < arr[high]) {

            result.min = arr[low];

            result.max = arr[high];

        } else {

            result.min = arr[high];

            result.max = arr[low];

        }

        return result;

    }

    // Divide the list into two halves

    midIndex = (low + high) / 2;

    left = findMinMax(arr, low, midIndex);

    right = findMinMax(arr, midIndex + 1, high);

    // Combine the results from the two halves

    if (left.min < right.min) {

        result.min = left.min;

    } else {

        result.min = right.min;

    }

    if (left.max > right.max) {

        result.max = left.max;

    } else {

        result.max = right.max;

    }

    return result;

}

int main() {

    int arr[] = {5, 8, 3, 12, 6, 2, 9};

    int n = sizeof(arr) / sizeof(arr[0]);

    struct MinMax result;

    result = findMinMax(arr, 0, n - 1);

    printf("Minimum number: %d\n", result.min);

    printf("Maximum number: %d\n", result.max);
    getch();
    return 0;

}

