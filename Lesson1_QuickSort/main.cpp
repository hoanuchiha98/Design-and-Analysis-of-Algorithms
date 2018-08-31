#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#define N 15

void swap(int &a, int &b)
{
	int temp;
    temp = a;
    a = b;
    b = temp;
}

void output(int arr[], int size)
{
	for (int i=0; i<size; i++) 
	{
         printf("%d\t",arr[i]);
	}
}

int partition(int arr[], int left, int right)
{
	int pivot, i, j;
    pivot = arr[left];			// dat phan tu dau tien lam chot
    i = left+1;					
    j = right;
    do{
    	while ((arr[i]<=pivot) && (i<=right)) i++;			// Khi arr[i]<=chot thi tang i
    	while (arr[j]>pivot) j--;							// Khi arr[j]<=chot thi giam j
    	if (i<j) 
		{
		swap(arr[i],arr[j]);
		
	    }
    }
	while (i<j);
	output(arr,7);
	printf("\n");
	swap(arr[left],arr[j]);
	output(arr,7);
	printf("\n");									// doi cho phan tu chot va phan tu j cuoi cung
	return j;
}
void quick_sort(int arr[], int left, int right)
{
    	if (left<right)
		{
		int i = partition(arr,left,right);
		if(left<i-1) quick_sort(arr,left,i-1);
//		output(arr,7);
//	printf("\n");				// thuc hien nho hon hoac bang phan tu chot
        if (i+1<right) quick_sort(arr,i + 1,right);
//		output(arr,7);
//	printf("\n");		// thuc hien voi phan lon hon phan tu chot
		}
}

void random(int a[N])
{
   for(int i = 0; i < N; i++)
      a[i] = rand();
}

int main ()
{
	int arr[]={3,1,7,8,2,6,9};
	//random(arr);
    int size = sizeof(arr)/sizeof(int);
//    printf("Mang ban dau la:\n\n");
//    output(arr,size);
    //printf("%d\n", partition(arr,0,6));
    partition(arr,0,size-1);
	quick_sort(arr,0,size-1);
	//printf("\nMang sau khi sap xep la:\n\n");
	output(arr,size);
    //printf("%d",sizeof(arr)/sizeof(int));
	getch();
	return 0;
}
