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
const int N = 1e4 + 10;
vector<int> adj[N];
int n , m , g;
int as[N];
bool vis[N];

bool dfs(int u)
{
    for(int i : adj[u])
    {
        if(!vis[i])
        {
            vis[i] = 1;
            if(!as[i] || dfs(as[i]))
            {
                as[i] = u;
                return true;
            }
        }
    }
    return false;
}

void Solve()
{
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++)
    {
        int k;  cin >> k;
        for(int j = 0 ; j < k ; j++)
        {
            int x;  cin >> x;
            adj[i].push_back(x);
        }
    }
    for(int i = 1 ; i <= n ; i++)
    {
        memset(vis , 0 , sizeof vis);
        dfs(i);
    }
    int ans = 0;
    for(int i = 1 ; i <= m ; i++)
    {
        ans += as[i] == 0;
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
