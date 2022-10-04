#include "bits/stdc++.h"
using namespace std;

class Vt
{
    private:
        int n;
        int *a;
    public:
        void nhap();
        void xuat();
        Vt tichvohuong(const Vt& b);
        double Module(const Vt &b);
};

void Vt :: nhap()
{
    printf("Nhap kich thuoc vector : ");
    scanf("%d" , &this -> n);
    this -> a = new int[n];
    printf("Nhap phan cac phan tu cua vector : ");
    for(int i = 0 ; i < n ; i++)
        scanf("%d" , a + i);
}

void Vt :: xuat()
{
    for(int i = 0 ; i < this -> n ; i++)
    {
        printf("%d " , *(a + i));
    }
    puts("");
}

Vt Vt :: tichvohuong(const Vt& b)
{
    Vt c;
    c.n = n;
    c.a = new int[n];
    for(int i = 0 ; i < b.n ; i++)
        c.a[i] = a[i] * b.a[i];
    return c;
}

double Vt :: Module(const Vt& b)
{
    double dis = 0;
    for(int i = 0 ; i < this -> n ; i++)
    {
        dis += pow(this -> a[i] - b.a[i] , 2);
    }
    return sqrt(dis);
}

int main()
{
    Vt a , b, c;
    a.nhap();
    b.nhap();
    c = a.tichvohuong(b);
    c.xuat();
    printf("%.4f" , a.Module(b));
}
