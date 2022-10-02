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
    // if(fopen("in" , "r"))
        // freopen("in" , "r" , stdin);
}
int n , q;
const int N = 4e5 + 10;
vector<int> adj[N];
set<ll> sums;
bool vis[N];
vector<ll> a(N);
 
void dfs(int u , int p)
{
    vis[u] = 1;
 
    ll can = a[u];
    for(int v : adj[u])
    {
        if(!vis[v])
        {
            dfs(v , u);
            can = max(can , a[v]);
        }
    }
 
    if(can > a[u])
    {
        auto lb = sums.lower_bound(can - a[u]);
        // cout << u << ' ' << *lb << '\n';
        if(lb == sums.end())
        {
            cout << -1 << "\n";
            exit(0);
        }
        else
        {
            a[u] += *lb;
        }
    }
 
}
void Solve()
{
    cin >> n >> q;
 
    for(int i = 1 ; i <= n ; i++)
    {
        cin >> a[i];
    }
 
    for(int i = 0 ; i < n - 1 ; i++)
    {
        int u , v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
 
    vector<ll> up(q , 0);
    for(int i = 1 ; i <= q; i++)
    {
        cin >> up[i];
    }
    ll s = accumulate(up.begin() + 1 , up.begin() + q + 1 , 0LL);
    ll dp[s + 1];
    memset(dp , 0 , sizeof dp);
    dp[0] = 1;
 
    for(int i = 1 ; i <= q ; i++)
    {
        for(int j = s - up[i] ; j >= 0 ; j--)
        {
            if(dp[j] != 0)
            {
                dp[j + up[i]] = 1;
            }
        }
    }
 
    for(int i = 0 ; i <= s; i++)
    {
        if(dp[i]) sums.insert(i);
    }
 
    dfs(1 , 0);
    ll ans = 0;
    for(int i = 1 ; i <= n ; i++)
    {
        ans += a[i];
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