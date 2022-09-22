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
const int N = 51;
ll f[N];
const int mod = 1e7 + 7;

ll pw(ll a , ll b , ll m)
{
    ll res = 1;
    while(b)
    {
        if(b & 1)
        {
            res = (res % mod) * (a % mod) % mod;            
        }
        a = (a % mod) * (a % mod);
        b >>= 1;
    }
    return res;
}
ll inv(ll )
void Solve()
{
    f[0] = 1;
    for(int i = 1 ; i < N ; i++)
        f[i] = f[i - 1] * i;
    
    

}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int truongdoan = 1;
    //cin >> truongdoan;

    while(truongdoan-->0)
    {
        Solve();
    }

    return 0; 
}