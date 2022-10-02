#include <bits/stdc++.h>
using namespace std;

void IO()
{
    cin.tie(0) -> sync_with_stdio(false);
    if(fopen("in" , "r"))
        freopen("in" , "r" , stdin);
}

double a = 0 , b = 0 , c = 5 , d = 50;
string s;
void Solve()
{
    for(int kase = 1 ; kase <= 25 ; kase++)
    {
        getline(cin , s);
        int n = s.size() - 1;
        bool fl = 0;
        double num = 0, base = 0.1;

        for(int i = 0 ; i < n ; i++)
        {
            if(s[i] == '.')
            {
                fl = 1;
                continue;
            }
            if(s[i] >= '0' && s[i] <= '9')
            {
                if(!fl)
                {
                    num = num * 10 + (s[i] - '0');
                }
                else
                {
                    num = num + (base * (s[i] - '0')); 
                    base *= 0.1;
                }
            }

        }
        if(s[0] == 'A' && s[1] == 'T' && s[2] == 'K')
        {
            if(s[3] == '+')
            {
                a += num;
            }
            else
            {
                b += num;
            }
        }

        if(s[0] == 'C' && s[1] == 'r' && s[2] == 'i' && s[3] == 't')
        {
            if(s[5] == 'R')
            {
                c += num;
            }
            else
            {
                d += num;
            }
        }
    }
    // cout << a << " " << b << " " << c << ' ' << d << "\n";
    c *= 0.01;
    d *= 0.01;

    if(d > 1) d = 1;
    double atk = 1500 * (1 + b * 0.01) + a;

    double e = atk * (1 - d) + atk * (1 + c) * d;
    printf("%.15lf" , e);
}

int main()
{
    IO();
    int truongdoan = 1;
    //cin >> truongdoan;
    while(truongdoan-->0)
        Solve();
    return 0; 
}
