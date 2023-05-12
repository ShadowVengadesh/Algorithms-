#include <time.h>

#include <stdio.h>

int i;

// Function to print an array

void printArray(int array[], int size) {

for ( i = 0; i < size; i++) {

printf("%d ", array[i]);

}

printf("\n");

}

void insertionSort(int array[], int size) {

int step;

for (step = 1; step < size; step++) {

int key = array[step];

int j = step - 1;

// Compare key with each element on the left of it until an element smaller than

// it is found.

// For descending order, change key<array[j] to key>array[j].

while (key < array[j] && j >= 0) {

array[j + 1] = array[j];

--j;

}

array[j + 1] = key;

}

}
// Driver code

int main() {

int data[] = {9, 5, 1, 4, 3};

int size = sizeof(data) / sizeof(data[0]);

float begin,end;

begin=clock();

insertionSort(data, size);

printf("Sorted array in ascending order:\n");

printArray(data, size);

end=clock();

printf("\n Time Taken is %f CPU1 cycles \n",(end-begin)/CLK_TCK);

}
