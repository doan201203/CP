#include<bits/stdc++.h>
using namespace std;

class Phanso
{
    private:
        int tuso , mauso;
    public:
        void nhap();
        void xuat();
        void cong(const Phanso &);
        void tru(const Phanso &);
        void nhan(const Phanso &);
        void chia(const Phanso &);
        void rutgon();
        void set(int _t , int _m);
        int get_tu();
        int get_mau();
        Phanso();
        Phanso(int _t , int _m = 1);
};
void Phanso :: set(int _t , int _m)
{
    if(_m == 0)
    {
        cout << "mau so khong the = 0.";
    }
    else
    {
        Phanso(_t , _m);
    }
}
int Phanso :: get_tu()
{
    return tuso;
}

int Phanso :: get_mau()
{
    return mauso;
}

Phanso :: Phanso(){tuso = 0 ; mauso = 1;}
Phanso :: Phanso(int _t , int _m){tuso = _t;mauso = _m;}

void Phanso :: rutgon()
{
    int g = __gcd(tuso , mauso);
    tuso /= g;
    mauso /= g;
}

void Phanso :: cong(const Phanso& b)
{
    tuso = tuso * b.mauso + mauso * b.tuso;
    mauso = b.mauso * mauso;
    rutgon();
}

void Phanso :: tru(const Phanso& b)
{
    tuso = tuso * b.mauso - mauso * b.tuso;
    mauso = b.mauso * mauso;
    rutgon();
}

void Phanso :: nhan(const Phanso& b)
{
    tuso = tuso * b.tuso;
    mauso = b.mauso * mauso;
    rutgon();
}

void Phanso :: chia(const Phanso& b)
{
    tuso = tuso * b.mauso;
    mauso = b.tuso * mauso;
    rutgon();
}

void Phanso:: nhap()
{
    cout << "NHAP TU SO VA MAU SO : ";
    cin >> tuso >> mauso;
    while (mauso == 0)
    {
        cout << "MAU SO KHONG HOP LE ! NHAP LAI : ";
        cin >> mauso;
    }
    rutgon();
}

void Phanso :: xuat()
{
    cout << tuso << '/' << mauso << '\n';
}

int main()
{
    Phanso a , b;
    a.nhap();
    b.nhap();
    // a.cong(b);
    a.chia(b);
    a.xuat();
}