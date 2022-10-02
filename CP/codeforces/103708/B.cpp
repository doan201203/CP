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

const int N = 1e5 + 10;
vector<int> adj[N];
int n , k;
int d[N];
bool vis[N];
set<int> st;
bool vis2d[N][101];

void dfs(int u , int par , int cnt)
{
    if(vis2d[u][cnt]) return;
    if(cnt > k) return;
    if(!vis[u]) st.insert(u);
    vis[u] = vis2d[u][cnt] = 1;
    for(int v : adj[u])
    {
        if(v != par)
        {
            dfs(v , u , cnt + 1);
        }
    }
}

void Solve()
{
    cin >> n >> k;
    for(int i = 0 ; i < n - 1 ; i++)
    {
        int u , v;  cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> ans;
    st.insert(1);
    vis[1] = true;
    while((int) ans.size() != n)
    {
        int bg = *st.begin();
        st.erase(bg);
        ans.push_back(bg);
        dfs(bg , bg , 0);
        //cout << "\n";
    }
    //cout << "\n";
    for(int i : ans)
    {
        cout << i << ' ';
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
