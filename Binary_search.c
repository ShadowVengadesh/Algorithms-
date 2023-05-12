#include<stdio.h>

#include<conio.h>

#include<time.h>

#include<stdlib.h>

#define max 20

int pos;

Int binsearch (int,int[],int,int,int);

void main()

{

int ch-1:

double t;

int n,i,a [max],k,op.low,high.pos;

clock_tbegin,end;

clrscr());

while(ch)

{ printf("\n...... MENU \n 1.BinarySearch \n 2.Exit \n");

printf("\n enter your choice\n");

scanf("%d",&op);

switch(op)

{

case 1:printf("\n enter the number of elments\n");

scanf("%d",&n); printf("\n enter the number of an array in the order \n");

for(i=0;i<n;i++)

scanf("%d",&a[i]);

printf("\n enter the elements to be searched \n");

scanf("%d",&k); low=0;high=n-1; begin=clock();

pos=binsearch(n,a,k,low,high);

end-clock();

if(pos=-1) printf("\n\nUnsuccessful search");

else

printf("\n element %d is found at position %d",k,pos+1);

printf("\n Time Taken is %lf CPU1 cycles \n",(end-begin)/CLK_TCK);

getch();

break;

}

printf("\n Do you wish to run again(1/0) \n");

scanf("%d",&ch);

}

getch();

Int binsearch(int n,int a[],int k,int low,int high)

}

{ int mid; delay(1000); mid=(low+high)/2;

if(low>high) return -1;

if(ka[mid]) return(mid);

else

if(k<a[mid])

return binsearch(n,a,k,low,mid-1);

else return binsearch(n,a,k,mid+1,high);
}
