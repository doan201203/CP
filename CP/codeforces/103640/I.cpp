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

int n , now;
map<string,int> mp {
     {"Mon" , 0}
    ,{"Tue" , 1}
    ,{"Wed" , 2}
    ,{"Thu" , 3}
    ,{"Fri" , 4}
    ,{"Sat" , 5}
    ,{"Sun" , 6}
};

int f(int x)
{
    int after = ((now - x) % 7 + 7) % 7;
    cout << after << ' ';
    int res = 50;
}

void IO()
{
    cin.tie(0) -> sync_with_stdio(false);
}

void Solve()
{
    string s; cin >> s;
    cin >> n;
    int ans = 1e9;
    now = mp[s];

    for(int i = 0 ; i < n ; i++)
    {
        int x;  cin >> x;
        ans = min(ans , f(x));
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
