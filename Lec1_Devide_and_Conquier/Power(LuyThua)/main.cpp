//
// Created by Nguyễn Khắc Hoàn on 10/12/18.
//

#include <stdio.h>
#include <stdlib.h>

int power(int a, int n)
{
    if (n == 0)
        return 1;
    else if (n%2 == 0)
        return power(a*a, n/2);     // nếu n chẵn
    else
        return a*power(a*a, n/2);   // nếu n lẻ

}

int main()
{
    int a,n;
    printf("Nhap a= ");     scanf("%d", &a);
    printf("Nhap n= ");     scanf("%d", &n);
    printf("Luy thua bac n cua a la: %d^%d= %d", a,n, power(a,n));
    system("pause");
}
