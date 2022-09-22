#include "bits/stdc++.h"
using namespace std;

class String
{
    private:
        int n;
        char a[100];
    public:
        int getLen();
        String();
        String(int n , char _a[]);
        String(char _a[]);
        void nhap();
        void xuat();
        void merger(const String &b);
        char character(int i);
};
String :: String()
{
    this -> n = 0;
    memset(this -> a , '\0' , sizeof this -> a);
}

String :: String(char _a[])
{
    int n = 0;
    while(_a[n] != '\0') this -> a[n] = _a[n] , n++;
    this -> n = n;
}

String :: String(int n , char _a[])
{
    this -> n = n;
    for(int i = 0 ; i < n ;i++)
        this -> a[i] = _a[i]; 
}

int String :: getLen()
{
    int len = 0;
    while(this -> a[len++] != '\0');
    return len;
}

char String :: character(int i)
{
    if(i < 1 || i > n)
    {
        cout << "Out of Range\n";
        return '\0';
    }
    return this -> a[i - 1];
}

void String :: nhap()
{
    cout << "Nhap chuoi S : ";
    cin >> this -> a;
    this -> n = strlen(a);
}

void String :: xuat()
{
    cout << this -> a << endl;
}

void String :: merger(const String &b)
{
    int lenb = b.n;
    for(int i = 0 ; i < lenb ; i++)
    {
        this -> a[this -> n + i] = b.a[i];
    }
    this -> a[this -> n + lenb] = '\0';
}

int main()
{
    String s , v;
    s.nhap();
    v.nhap();
    cout << s.character(4) << '\n';
    s.merger(v);
    s.xuat();
}
