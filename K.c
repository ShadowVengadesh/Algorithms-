#include<iostream>

#include<climits>

#include<cstdlib>

using namespace std;

int randomPartition(int arr[], int 1, int r);

int kthSmallest(int arr[], int 1, int r, int k)

return kthSmallest(arr, 1, pos-1, k);

return kthSmallest(arr, pos+1, r, k-pos+1-1);

}

return INT_MAX;

}

void swap(int *a, int *b)

{

int temp = *a;

*a = *b;

*b= temp;

}
int partition(int arr[], int 1, int r)

{

int x = arr[r], i=1; for (int j = 1; j <=r-1; j++)

{

if (arr[j] <= x)

{

swap(&arr[i], &arr[j]);

i++; } } swap(&arr[i], &arr[r]); return i;

}

int randomPartition(int arr[], int 1, int r)

{

int n=r-1+1;

int pivot = rand()% n;

swap(&arr[1+ pivot], &arr[r]); return partition(arr, 1, r);

}

int main(

{

int arr[]= {12, 3, 5, 7, 4, 19, 26};

int n = sizeof(arr)/sizeof(arr[0]), k = 3; cout <<"K'th smallest element is "<<kthSmallest(arr, 0, n-1,

k);

return 0;

}
