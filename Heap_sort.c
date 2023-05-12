#include<stdio.h>

#include<conio.h>

#include<time.h>

void heapsort(int n,int arr[]);

void heapy(int n,int arr[]);

void adjust(int n,int arr[]);

void heapsort(int n,int arr[])

{ inti,item;

delay(100); heapy(n,arr);

for(i=n;i>=1;i--)

{ item=arr[1]; arr[1]=arr[i]; arr[i]=item;

adjust(i,arr);

}

} void heapy(int n,int arr[])

{

inti,j,k,item;

for(i=1;i<=n;i++)

{

item=arr[i]; j=i;

k=j/2;

while(k!=0 && item>arr[k])

{
k-j/2; 2560 m of gaier stasmask fe

}

arr[j]=item;

}

void adjust(int n,int arr[])

{

inti,j,item; j=1;

item=arr[j]; i=j*2;

while(i<n)

{

if((i+1)<n)

{

if(arr[i]<arr[i+1])

i++;

}

if(item<<arr[i])

{

arr[j]=arr[i]; j=i;

i=2*j;

}

else break;

}

arr[j]=item;

}

void main

{

int i,n,arr[20];

clock_tend,start;

clrscr();

scanf("%d",&arr[i]);

start=clock();

heapsort(n,arr);

end-clock();

printf("\nSorted Elements are\n");

for(i=1;i<=n;i++) printf("%d ",arr[i]);

printf("\nTime taken by Heapsort %f CPU Cycle", (end-start)/CLK_TCK);

getch();

}
arr[j]=arr[k]; j-k;
