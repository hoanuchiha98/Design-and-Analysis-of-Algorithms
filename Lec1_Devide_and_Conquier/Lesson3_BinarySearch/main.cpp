#include <stdio.h>

int binary_search(int a[], int x, int first, int last)
{
    if (first>last)
        return 0;
    else
    {
        int mid;
        mid = (first+last)/2;		//chia mang thanh 2 phan
        if (x==a[mid]) return mid;
        else
        if (x > a[mid]) return binary_search(a,x,mid+1,last);		//neu x>a[mid] thi tim kiem tren doan sau
        else return binary_search(a,x,first,mid);					//neu x>a[mid] thi tim kiem tren doan dau
    }
}

int main()
{
    // tim tren mang da sap xep
    int a[]={2,5,10,14,16};
    int x=10;
    int result;		//ket qua tra ve cua tim kiem
    result = binary_search(a,x,1,5);
    if (result ==  0) printf("Khong tim thay %d", x);
    else printf("Tim thay %d o vi tri %d", x, result+1);
}
