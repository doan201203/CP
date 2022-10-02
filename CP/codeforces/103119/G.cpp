#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
const int N = 2e6 + 10;
int a[N];
short dp[280];
int lst[556];

void IO()
{
    cin.tie(0) -> sync_with_stdio(false);
    if(fopen("in" , "r"))
        freopen("in" , "r" , stdin);
}

short trau(int i)
{
    if(dp[i] != -1) return dp[i];
    bool ok = 0;
    for(int j = 0 ; j < 8 ; j++)
    {
        int nxt = i ^ (1 << j);
        if(lst[nxt] >= lst[i] && !trau(nxt))
        {
            ok = 1;
        }
    }
    return dp[i] = ok;
}

void Solve()
{
    fill(lst , lst + 556 , -1);
    int n , q;
    cin >> n >> q;

    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
        lst[a[i]] = i;
    }

    while(q--)
    {
        int op , k; cin >> op >> k;
        if(op == 1)
        {
            lst[k] = n;
            a[n] = k;
            ++n;
        }
        else
        {
            k--;
            if(lst[a[k]] > k)
            {
                cout << "Grammy\n";
                // continue;
            }
            else
            {
                // fill(dp , dp + 280 , -1);'
                // memset(dp , -1 , sizeof dp);
                for(int i = 0 ; i <= 255 ; i++) dp[i] = -1;

                cout << (!trau(a[k]) ? "Alice" : "Grammy") << '\n';
            }
        }
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