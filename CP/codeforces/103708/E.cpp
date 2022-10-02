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
const int N = 5004;
const int mod = 1e9 + 7;
ll nCk[N][N] , dp[N];

ll pw(ll a , ll b)
{
    ll r = 1;
    while(b)
    {
        if(b & 1) r = (r * a) % mod;
        b >>= 1;
        a = (a * a) % mod;
    }
    return r;
}
void Solve()
{
    int n , m , k;
    cin >> n >> m >> k;
    for(int i = 1 ; i <= m ; i++)
    {
        ll nk = pw(i , n);
        for(int j = 1 ; j < i ; j++)
        {
            dp[i] = (dp[i] - (dp[j] * nCk[i][j]) % mod + mod) % mod;
        }
    }
    cout << nCk[5][3] << '\n';
    cout << (dp[k] * nCk[m][k]) % mod << '\n';
}

int main()
{
    IO();
    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j <= i ; j++)
        {
            if(i == j || j == 0)
            {
                nCk[i][j] = 1;
            }
            else
                nCk[i][j] = (nCk[i - 1][j - 1] + nCk[i - 1][j]) % mod;
        }
    }
    int truongdoan = 1;
    //cin >> truongdoan;
    while(truongdoan-->0)
        Solve();
    return 0; 
}
