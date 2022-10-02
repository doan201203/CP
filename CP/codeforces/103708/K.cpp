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
const int N = 2e5;
ll dp[N] , pref[N];

void Solve()
{
    int n , k;
    cin >> k >> n;
    vector<ll> a(n);
    ll s = 0;
    for(ll &i : a) cin >> i , s += i;

    

    dp[0] = 1;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 1 ; j <= N ; j++)
        {
            ll left = j - a[i];
            if(left >= 0)
            {
                if(dp[left])
                    dp[j] = 1;
            }
        }
    }
    set<ll> st;
    for(int i = N - 2 ; i >= 0 ; i--)
    {
        if(dp[i])
        {
            pref[i] = 0;
        }
        else pref[i] = pref[i + 1] + 1;
    }
    for(int i = 0 ; i < k ; i++)
    {
        //cout << pref[i] << ' ';
        int x;  cin >> x;
        cout << pref[x] << '\n';
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
