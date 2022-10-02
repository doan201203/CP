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
const int N = 501 , inf = 1e9;
typedef pair<int,int> ii;
vector<ii> adj[N];
int n , m , q;
 
int cost(int s , int t , int bon)
{
    vector<int> d(n + 1 , 1e9);
    vector<bool> vis(n + 1 , false);
 
    d[s] = bon;
    priority_queue<ii , vector<ii> , greater<ii>> g;
    g.push({d[s] , s});
    while(not g.empty())
    {
        ii now = g.top();
        g.pop();
        int u = now.second;
        if(vis[u]) continue;
        vis[u] = true;
        for(ii v : adj[u])
        {
            int vv = v.second;
            int c = v.first;
            if(d[vv] > d[u] + c + bon)
            {
                d[vv] = d[u] + c + bon;
                g.push({d[vv] , v.second});
            }
        }
    }
    if(d[t] == inf) d[t] = -1; 
    return d[t];
} 
 
void Solve()
{
    cin >> n >> m >> q;
    for(int i = 0 ; i < m ; i++)
    {
        int u , v , c;
        cin >> u >> v >> c;
        adj[u].push_back({c , v});
    }
 
    while(q--)
    {
        int u , v , bonus;
        cin >> u >> v >> bonus;
        cout << cost(u , v , bonus) << "\n";
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