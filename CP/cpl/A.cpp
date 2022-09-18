#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ar array

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
template <typename T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define pb push_back
#define all(c) (c).begin(), (c).end()
const int N = 1e5 + 10;
vector<int> adj[N];
int n , m;
int inof[N];
bool ok[N] , vis[N];
string s;
struct dsu
{
    vector<int> par , sz;
    dsu(int n) : par(n + 10) , sz(n + 10 , 1) {}
    void make_set(int u)
    {
        par[u] = u;
    }
    int fp(int u)
    {
        if(par[u] == u)
        {
            return u;
        }
        return par[u] = fp(par[u]);
    }
    void unite(int u , int v)
    {
        int a = fp(u) , b = fp(v);
        if(a != b)
        {
            if(sz[a] < sz[b]) swap(a , b);
            sz[a] += sz[b];
            par[b] = a;
        }
    }
    bool same(int u , int v)
    {
        return fp(u) == fp(v);
    }
};
void Solve()
{   
    cin >> n >> m >> s;
    s = " " + s;
    dsu g(n + 1);
    for(int i = 1 ; i <= n ; i++)
    {
        g.make_set(i);
    }
    for(int i = 0 ; i < n - 1 ; i++)
    {
        int a , b;  cin >> a >> b;
        if(s[a] == s[b])
        {
            g.unite(a , b);
        }
    }
    for(int i = 0 ; i < m ; i++)
    {
        int a , b;
        char c;
        cin >> a >> b >> c;

        if(s[a] == c || !(g.same(a , b)))
        {
            // cout << g.fp(a) << " " << g.fp(b) << "\n";
            cout << 1;
        }
        else cout << 0;
    }
}

int main()
{

    ios_base::sync_with_stdio(true);
    // cin.tie(NULL);

    int truongdoan = 1;
    //cin >> truongdoan;

    while(truongdoan-->0)
    {
        Solve();
    }

    return 0; 
}