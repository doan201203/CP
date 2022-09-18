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
ll to_num(string s)
{
    ll num = 0;
    for(int i = 0 ; i < sz(s) ; i++)
    {
        num = (s[i] - '0') + num * 10;
    }
    return num;
}

const int N = 1e6 + 10;
ll a[N] , pref[N] , rr;
int n;
string s;

bool f(ll mid)
{
    for(int i = 1 ; i <= n - mid + 1 ; i++)
    {
        if(pref[i + mid - 1] - pref[i - 1] > rr)
        {
            return false;
        }
    }
    return true;
}

void Solve()
{
    cin >> n >> s;
    string nn = "";
    //string ch = "";
    for(int i = 0 ; i < (int) s.size() ; i++)
    {
        if(isdigit(s[i])) nn += s[i];
    }

    rr = to_num(nn);

    if(s.back() == 'T') rr = rr * 10240;
    else if(s.back() == 'G') rr = rr * 1024;

    for(int i = 1 ; i <= n ; i++)
    {
        cin >> a[i];
    }
    for(int i = 1 ; i <= n ; i++)
    {
        pref[i] = pref[i - 1] + a[i];
    }

    ll l = 1 , r = n;
    ll ans = 0 , ans2 = 0;
    while(l <= r)
    {
        ll mid = (l + r) >> 1;
        if(f(mid)) l = mid + 1 , ans = mid; 
        else r = mid - 1;
    }

    for(int i = 1 ; i <= n - ans ; i++)
    {
        // cout << i << ' ';
        if(pref[i + ans] - pref[i - 1] > rr)
        {
            ans2 = i;
            break;
        }
    }

    if(ans2 == 0) ans2 = -1;
    cout << ans << ' ' << ans2 << '\n';
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
