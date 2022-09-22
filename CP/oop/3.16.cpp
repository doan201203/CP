#include<bits/stdc++.h>
using namespace std;
const int nD = 3;

class point
{
    private:
        double a[nD];
    public:
        void nhap();
        void xuat();
        double distance(const point &b);
};

void point :: nhap()
{
    cout << "Nhap toa do diem (";
    for(int i = 0 ; i < nD ; i++)
    {
        cout << char(i + 'a') ;
        if(i != nD - 1)
            cout << " , ";
    }
    cout << ") : ";

    for(int i = 0 ; i < nD ; i++)
        cin >> this -> a[i];
}

void point :: xuat()
{
    for(int i = 0 ; i < nD ; i++)
    {
        cout << "Toa do diem " << char(i + 'a') << " : " << a[i] << '\n';
    }
}

double point :: distance(const point &b)
{
    double sum = 0.0;
    for(int i = 0 ; i < nD ; i++)
    {
        sum += pow(b.a[i] - (this -> a[i]) , 2);
    }
    return sqrt(sum);
}

int main()
{
    point a, b;
    a.nhap();
    b.nhap();
    cout << a.distance(b);
}