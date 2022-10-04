#include "bits/stdc++.h"
using namespace std;

class Array
{
    private:
        int n = 0;
        int *a;
    public:
        void nhap();
        void xuat();
        Array sum(const Array &b);
};

void Array :: nhap()
{
    cout << "Nhap kich thuoc mang : ";
    cin >> this -> n;
    cout << "Nhap cac phan tu mang : ";
    a = new int[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
}

void Array :: xuat()
{
    for(int i = 0 ; i < n ; i++)
        cout << a[i] << ' ';
    cout << '\n';
}

Array Array :: sum(const Array& b)
{
    Array c;
    c.n = n;
    c.a = new int[n];

    for(int i = 0 ; i < this -> n ; i++)
    {
        c.a[i] = a[i] + b.a[i];
    }  
    
    return c;
}

int main()
{
    Array a, b , c;
    a.nhap();
    b.nhap();
    c = a.sum(b);
    c.xuat();
}
