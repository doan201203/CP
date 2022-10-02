#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array
#define int long long
 
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
set<node> a;

void Solve()
{
    int n;  cin >> n;
    for(int i = 0 ; i < n ; i ++)
    {
        int t , d;
        cin >> t >> d;
        a.insert({t , d , i + 1});
    }
    int use = 0;
    int ck = 0;
    for(auto x : a)
    {
        ck += x.t;
        if(ck > x.d)
        {
            cout << "*";
            return;
        }
    }
    for(int i = 0 ; i < n ; i++)
    {
        int sum = use , mn = 2e12;
        node x = *a.begin();
        for(const node& nxt : a)
        {
            if(nxt.t <= mn)
            {
                if(x.id > nxt.id)
                {
                    x = nxt;
                }
            }
            sum += nxt.t;
            mn = min(mn , nxt.d - sum);
        }
        cout << x.id << ' ';
        a.erase(x);
        use += x.t;
    }
}
 
signed main()
{
    IO();
    int truongdoan = 1;
    //cin >> truongdoan;
    while(truongdoan-->0)
        Solve();
    return 0; 
}
