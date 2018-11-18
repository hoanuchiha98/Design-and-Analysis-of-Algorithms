//
// Created by Nguyễn Khắc Hoàn on 10/28/18.
//

#include <iostream>

using namespace std;

int x[20];                       //hang
int a[20];                       //cot
int b[50], c[50], n=5;          //duong cheo chinh, phu

void Init()
{
    for(int i=2;i<=2*n;i++)
        b[i]=1;
    for(int i=1-n;i<=n-1;i++)
        c[i]=1;
    for(int i=1;i<=n;i++)
        a[i]=1;
}

void XuatKQ()
{
    for(int i=1;i<=n;i++)
        cout << "{" << i << "," << x[i] << "} ";
    cout << endl;
}

void Try(int i)
{
    for (int j = 1; j<=n; j++)
    {
        if (a[j] && b[i+j] && c[i-j])
        {
            x[i] = j;
            a[j] = 0;
            b[i+j] = 0;
            c[i-j] = 0;
            if (i==n) XuatKQ();
            else Try(i+1);
            a[j] = 1;
            b[i+j] = 1;
            c[i-j] = 1;
        }
    }
}

int main()
{
    Init();
    Try(1);
    system("pause");
    return 0;
}