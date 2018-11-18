//
// Created by Nguyễn Khắc Hoàn on 10/28/18.
//
#include <iostream>
#include <iomanip>
using namespace std;
#define N 8
// Khoi tao cho ban co
void Init(int h[][N])
{
        for (int x = 0; x<N; x++)
                for (int y = 0; y<N; y++)
                        h[x][y] = 0;
}
// Kiem tra con ma di dung tren ban co
int check(int u, int v)
{
        return (u >= 0 && u<N && v >= 0 && v<N);
}
// Hien thi cac vi tri con ma di tren ban co
void XuatKQ(int h[][N])
{
        for (int x = 0; x<N; x++)
        {
                for (int y = 0; y < N; y++)
                        cout << setw(3) << h[x][y];
                        cout << endl;
        }
}
// Neu vi tri da di thi se khong di lai nua
void Try(int i, int x, int y, int h[][N], int *a, int *b, int &OK)
{
    int k, u ,v;
    for (int k = 0; k<N; k++)
    {
        u = x + a[k];
        v = y + b[k];
        if(check(u, v) && h[u][v] == 0)
        {
            h[u][v] = i + 1;
            if (i<N*N - 1)
            {
                Try(i+1, u, v, h, a, b, OK);
                if (!OK)         h[u][v] = 0;
            }

            else OK = 1;        // hoan tat
        }

    }
}
// Chuong trinh chinh
int main()
{
        int h[N][N], x = 0, y = 0, OK = 0;
        int a[8] = { -2, -1, 1, 2, 2, 1, -1, -2 };
        int b[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };
        Init(h);
        h[x][y] = 1;
        Try(1, x, y, h, a, b, OK);
        if (OK) XuatKQ(h);
        else
        cout << "K co loi giai!" << endl;
        system("pause");
        return 0;
}
//NHan Ctrl + F9 de bien dich chuong trinh
// Nhan Alt + R de chay