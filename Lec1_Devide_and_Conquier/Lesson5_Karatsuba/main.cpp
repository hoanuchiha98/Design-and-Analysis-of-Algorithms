#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int karatsuba(int x, int y, int n)
{
    if (n==1) return x*y;
    else
    {
        int t = n/2;
        float a,b,c,d,u,v,w;
        int z = pow(10,t);
        a = x / z;
        b = x % z;
        c = y / z;
        d = y % z;
        u = karatsuba(a, c, t);
        v = karatsuba(b, d, t);
        w = karatsuba(a+b, c+d, t);
        return u * pow(10,n) + (w-u-v)* pow(10, t) + v;
    }
}

int main()
{
    printf("%d", karatsuba(1234,1234,4));
}
