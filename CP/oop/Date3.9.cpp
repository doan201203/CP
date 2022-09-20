#include<bits/stdc++.h>
using namespace std;

class Date
{
    private:
        int day , month , year;
    public:
        int getDay();
        int getMonth();
        int getYear();
        void nhap();
        void xuat();
        void inc_day();
        void inc_day(int k);
        int distance(const Date &b);
        bool checkYear();
        bool valid();
};

int Date :: getDay()
{
    return day;
}

int Date :: getMonth()
{
    return month;
}

int Date :: getYear()
{
    return year;
}

bool Date :: valid()
{
    if(day <= 0 || month <= 0 || year <= 0 || month > 12 || day > 31) return false;
    bool leap = checkYear();
    switch (month)
    {
        case 4:
        case 6:
        case 9:
        case 11:
            if(day > 30) return false;
            break;
        
        case 2:
            if(leap)
            {
                if(day > 29) return false;
            }
            else
            {
                if(day > 28) return false;
            }
            break;
        default:
            break;
    }
    return true;
}

void Date :: nhap()
{
    cout << "Nhap ngay , thang , nam : ";
    cin >> day >> month >> year;
    while(!valid())
    {
        cout << "nhap lai ngay , thang ,  nam : ";
        cin >> day >> month >> year;
    }
    
}

void Date :: xuat()
{
    cout << "Ngay : " << day << " Thang : " << month << " Nam : " << year << '\n';
}

void Date :: inc_day()
{
    bool leap = checkYear();
    ++day;

    switch (month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if(day > 31)
            {
                day = 1;
                ++month;
                if(month > 12)
                {
                    month = 1;
                    ++year;
                }
            }
            break;
        case 2:
            if(leap)
            {
                if(day > 29)
                {
                    day = 1;
                    ++month;
                }
            }
            else
            {
                if(day > 28)
                {
                    day = 1;
                    ++month;
                }
            }
            break;
    default:
            if(day > 30)
            {
                day = 1;
                ++month;
            }
        break;
    }
}

void Date :: inc_day(int k)
{
    while(k--)
    {
        inc_day();
    }
}

bool Date :: checkYear()
{
    if (year % 400 == 0)
        return true;
    if (year % 100 == 0)
        return false;
    if (year % 4 == 0)
        return true;
    return false;
}

int Date :: distance(const Date &b)
{
    const int sum_day[13] = {0 ,31 , 59 , 90 , 120 , 151 , 181 , 212 , 243 , 273 , 304 , 334 , 365};
    long int cntleap = (year / 400) + (year / 4) - (year / 100);
    long int day1 = (365 * year) + (sum_day[month - 1]) + (cntleap) + day;
    //
    cntleap = (b.year / 400) + (b.year / 4) - (b.year / 100);
    long int day2 =  (365 * b.year) + (sum_day[b.month - 1]) + (cntleap) + b.day;
    return abs(day2 - day1);
}

int main()
{
    Date a , b;
    a.nhap();
    b.nhap();
    cout << "Khoang cach : " << a.distance(b) << '\n';
    b.inc_day(32);
    b.xuat();
}