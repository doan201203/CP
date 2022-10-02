#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array
 
template<typename T>
istream& operator >> (istream& in , vector<T> &a)
{
    for(T &i : a) in >> i;
    return in;
}
 
template<typename T>
ostream& operator << (ostream& out ,const vector<vector<T>> &a)
{
    for(const T &i : a)
    {
        for(const T &j : i)
            out << i << ' ';
        out << '\n';
    }
    return out;
}
map<ll , ll> mp;
void IO()
{
    cin.tie(0) -> sync_with_stdio(false);
    // if(fopen("in" , "r"))
        // freopen("in" , "r" , stdin);
}
map<ll , ll> ans;
 
void Solve()
{
    string s;
    cin >> s;
    int n = s.size() , i = 0;
    while(i < n)
    {
        bool ok = false; ll cof = 1;
        if(s[i] == '-') ok = true;
        if(s[i] == '-' || s[i] == '+')
            i++;
        if(isdigit(s[i]))
        {
            cof = 0;
            while(isdigit(s[i]))
            {
                cof = cof * 10 + (s[i] - '0');
                i++;
            }
        }
        if(ok) cof *= -1;
 
        if(s[i] == 'x')
        {
            ll exp = 1;
            i++;
            ok = false;
            if(s[i] == '^')
            {
                i++;
                if(s[i] == '-') ok = true , i++;
                if(isdigit(s[i]))
                {
                    exp = 0;
                    while(isdigit(s[i]))
                    {
                        exp = exp * 10 + (s[i] - '0');
                        i++;
                    }
                }
            }
            if(ok) exp *= -1;
            mp[exp] += (cof);
            // cout << exp << ' ' << cof << '\n';
        }        
    }
    // return;
    for(auto x : mp)
    {
        ans[x.first - 1] = x.first * x.second;
    }
    bool ok = true;
    for(auto x : ans)
    {
        if(x.second == 0) continue;
        if(x.second > 0 and !ok)
        {
            cout << "+";
        }
        if(abs(x.second) != 1)
        {
            cout << x.second;
        }
        ok = false;
        if(x.first == 0)
        {
            if(x.second == 1 || x.second == -1)
            {
                cout << x.second ;
            }
        }
        else if(x.first == 1)
        {
            cout << "x";
        }
        else
        {
            cout << "x^" << x.first;
        }
    }
    if(ok)
    {
        cout << 0;
    }
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