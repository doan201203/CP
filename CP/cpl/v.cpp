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

void Solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    sort(all(a));
    int cnt = 0;
    for(int i = 0 ; i < n - 1 ; i++)
    {
        if(a[i] + 1 < a[i + 1])
        {
            a[i + 1] = a[i] + 1;
            ++cnt; 
        }
    }
    if(n == 1)
    {
        if(a[0] != 1)
        {
            cout << "TUAN";
        }
        else cout << "CPU";
        return;
    }
    // cout << "CNT : " << cnt << '\n';
    if(cnt&1)
    {
        cout << "TUAN";
    }
    else cout << "CPU";
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