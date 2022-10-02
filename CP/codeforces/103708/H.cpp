#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void IO()
{
    cin.tie(0) -> sync_with_stdio(false);
    if(fopen("in" , "r"))
        freopen("in" , "r" , stdin);
}

void Solve()
{
    ll n; cin >> n;
    ll ans = -1e9;
    for(int a = 0 ; a <= n ; a++)
    {
        for(int b = 0 ; b <= n ; a++)
        {
            ll area = a * 2 + b * 2;
            if(area <= n) ans = max(ans , area);
        }
    }
    cout << ans << '\n';
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
