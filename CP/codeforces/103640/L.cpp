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

void IO()
{
    cin.tie(0) -> sync_with_stdio(false);
}

struct node
{
    int t , d , id;
    
};
bool operator < (const node &a , const node &b)
{
    if(a.d != b.d) 
        return a.d < b.d;
    return a.id < b.id;
}
void Solve()
{
    int n;  cin >> n;
    set<node> a;
    for(int i = 0 ; i < n ; i ++)
    {
        int t , d;
        cin >> t >> d;
        a.insert(node({t , d , i}));
    }
    ll use = 0;
    ll ck = 0;
    for(auto x : a)
    {
        if(ck + x.t > x.d)
        {
            cout << "*";
            return;
        }
        ck += x.t;
    }
    while(!a.empty())
    {
        ll sum = use , mn = 1e18;
        auto x = *a.begin();
        for(auto nxt : a)
        {
            if(nxt.id < x.id && mn >= nxt.t)
            {
                x = nxt;
            }
            sum += x.t;
            mn = min(mn , x.d - sum);
        }
        cout << x.id + 1 << ' ';
        a.erase(x);
        use += x.t;
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
