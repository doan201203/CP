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
#define sz(x) (int)(x).size()
const ll mod = 998244353;
void Solve()
{
    set<ll> r , c;
    ll n , m , k , q;
    cin >> n >> m >> k >> q;
    vector<pair<ll , ll>> pos(q);
    for(int i = 0 ; i < q ; i++)
    {
        cin >> pos[i].first >> pos[i].second;
    }
    reverse(all(pos));
    ll ans = 1;

    for(int i = 0 ; i < q ; i++)
    {
        if(r.size() == n || c.size() == m)
        {
            break;
        }
        if(r.empty() && c.empty())
        {
            ans *= k;
            ans %= mod;
            r.insert(pos[i].first);
            c.insert(pos[i].second);
        }
        else if(r.find(pos[i].first) == r.end() || c.find(pos[i].second) == c.end())
        {
            ans *= k;
            ans %= mod;
            r.insert(pos[i].first);
            c.insert(pos[i].second);
        }
    }
    cout << ans << '\n';
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int truongdoan = 1;
    cin >> truongdoan;

    while(truongdoan-->0)
    {
        Solve();
    }

    return 0; 
}