#include <stdio.h>
#include <stdlib.h>
#define N 15

void merge(int arr[], int left, int right, int mid);

void mergesort(int arr[], int left, int right);

void output (int arr[], int size);

void random(int arr[N]);


int main()
{
    int arr[N];
    random(arr);
    int size = sizeof(arr) / sizeof(int);
    printf("Mang luc dau la:\n ");
    output(arr, size);
    printf("Mang sau khi sap xep la:\n ");
    mergesort(arr,0,size-1);
    output(arr, size);
    return 0;
}

// merge hai mang arr[left...mid] va arr[mid+1...right] lai voi nhau
void merge(int arr[], int left, int right, int mid)
{
    int temp[20];                  // su dung con tro tam temp de tao mang add gia tri trong luc must 2 mang tren voi nhau
    int i = left;				    // vi tri phan tu dau tien cua mang con ben trai
    int j = mid+1;
    int t = left;			   //  vi tri phan tu dau tien cua mang con ben phai
    while (i <= mid && j <= right)
    {
        // neu a[i]<arr[j] thi gan temp[t]=a[i] va tang i
        if (arr[i] < arr[j])
        {
            temp[t] = arr[i];
            i++;
        }
            // nguoc lai thi gan bang a[j] va tang j++
        else {
            temp[t] = arr[j];
            j++;
        }
        t++; 			// tang t
    }
    // N?u m?t trong hai d?y h?t trý?c ti?n hành ðýa toàn b? d?y c?n l?i vào trong d?y temp
    while (i <= mid)				// khi mang dau chua het thi nem toan bo phan tu con lai vao mang temp
    {
        temp[t] = arr[i];
        t++;
        i++;
    }
    while (j <= right)				// khi mang dau chua het thi nem toan bo phan tu con lai vao mang temp
    {
        temp[t] = arr[j];
        t++;
        j++;
    }
    // Chep toan bo gia tri cua mang temp da sap xep vao mang arr[]
    for (int m = left; m <= right; m++ ) arr[m] = temp [m];
}

void mergesort(int arr[], int left, int right)
{
    if (left >= right)  return;

    int mid = (left + right) / 2;
    mergesort(arr, left, mid);
    mergesort(arr, mid + 1, right);
    merge(arr, left, right, mid);
}

void output(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void random(int arr[N])
{
    for (int i = 0; i < N; i++)
    {
        arr[i] = rand();
    }
}



