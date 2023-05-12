#include <stdio.h>

#include <stdlib.h>

void merge(int arr[], int 1, int m, int r)

{ int i, j, k; int nl m-1+1; int n2 = r - m; int L[nl], R[n2];

for (i=0; i<nl; i++)

L[i] = arr[1 + i); for (i=0;j<n2; j++)

R[j]= arr[m+1+j];

i=0; // Initial index of first subarray

j=0; // Initial index of second subarray k=1; // Initial index of merged subarray

while (i<nl && j <n2) {

if (L[i] <<=R[j]) {

arr[k]-L[i];

i++;

}

else {

arr[k] = R[j];

j++;

}
k++;}

while (i<nl) {

arr[k] = L[i];

i++;

k++;}

while (j <n2) {

arr[k] = R[j];

j++;

k++;}}

void mergeSort(int arr[], int I, int r)

if (l<r) {

int m-1+(r-1)/2;

// Sort first and second halves mergeSort(arr, 1, m); mergeSort(arr, m + 1, r); in argidong anomaly

merge(arr, l, m, r);

:((bred," be "nung}}

void printArray(int A[], int size) { int i; for (i=0; i < size; i++)

printf("%d", A[i]); printf("\n"); } {

int main( )

int arr[] = { 12, 11, 13, 5, 6, 7};

int arr_size = sizeof(arr)/ sizeof(arr[0]);

printf("Given array is \n");

printArray(arr, arr_size);

mergeSort(arr, 0, arr_size - 1);,

printf("\nSorted array is \n");

printArray(arr, arr_size);

return 0;}
