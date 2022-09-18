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
ll getoo(ll n)
{
    ll tmp = 1;
    while(n)
    {
        tmp *= (n % 10);
        n /= 10;
    }
    return tmp;
}
void Solve()
{
    ll n; cin >> n;
    ll ans = 0;
    while(n >= 10)
    {
        n = getoo(n);
        ans++;
    }
    cout << ans << "\n";
   
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
