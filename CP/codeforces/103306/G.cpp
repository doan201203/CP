#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void IO()
{
    cin.tie(0) -> sync_with_stdio(false);
}
const int N = 200 + 1;
bool vis[N];
int ans , n;
vector<int> adj[N];

void dfs(int u , int cnt)
{
    vis[u] = 1;
    for(int v : adj[u])
    {
        if(!vis[v])
        {
            dfs(v , cnt + 1);
        }
    }
    if(cnt > 2)
        ans = max(ans , cnt);
}
void Solve()
{
    cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
        int u , v;  cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i = 1 ; i <= 101 ; i ++)
    {
        memset(vis , 0 , sizeof(vis));
        dfs(i , 1);
    }
    cout << ans;
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