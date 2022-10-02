#include "bits/stdc++.h"
using namespace std;

class Array
{
    private:
        int n;
        int *a;
    public:
        void nhap();
        void xuat();
        void sum(const Array &b);
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

void Array :: sum(const Array& b)
{
    if(this -> n != b.n)
    {
        cout << "Khong the cong 2 mang khac kich thuoc !\n";
        return;
    }

    for(int i = 0 ; i < this -> n ; i++)
    {
        a[i] = a[i] + b.a[i];
    }
}

int main()
{
    Array a, b;
    a.nhap();
    b.nhap();
    a.sum(b);
    a.xuat();
}
