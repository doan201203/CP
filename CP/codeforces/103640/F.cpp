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
    if(fopen("in" , "r"))
        freopen("in" , "r" , stdin);
}
const int N = 3e5 + 10;
vector<int> adj[N];
int n , m;
bool vis[N];

void dfs(int u)
{

    vis[u] = 1;

    for(int v : adj[u])
    {
        if(!vis[v] && v != n) dfs(v);
    }
}

void Solve()
{
    cin >> n >> m;
    for(int i = 0 ; i < m ; i++)
    {
        int u , v;  cin >> u >> v;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }
    dfs(n - 1);
    for(int i = 1 ; i <= n ; i++)
    {
        if(vis[i]) cout << "B";
        else cout << "A";
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
