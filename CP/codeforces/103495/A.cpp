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

void IO()
{
    if(fopen("in" , "r"))
    {
        freopen("in" , "r" , stdin);
        // freopen("out" , "w" , stdin);
    }
}

void Solve()
{
    int n;
    cin >> n;
    vector<string> a(n) , b(n);
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    for(int i = 0 ; i < n ; i++)
        cin >> b[i];
    bool ok = true;
    if(a[n - 1].back() == '4' || a[n - 1].back() == '3')
    {
        if(b[n - 1].back() != '1' && b[n - 1].back() != '2') ok = false;
    }
    else ok = false;
    for(int i = 0 ; i < n - 1 ; i++)
    {
        if(a[i].back() == '2') a[i].back() = '1';
        if(a[i].back() == '4') a[i].back() = '3';
        if(b[i].back() == '2') b[i].back() = '1';
        if(b[i].back() == '4') b[i].back() = '3';
    }
    for(int i = 0 ; i < n - 1 ; i++)
    {
        int s1 = a[i].back() - '0' , s2 = b[i].back() - '0';
        if(s2 == s1) ok = false; 
    }
    cout << (ok ? "YES\n" : "NO\n");
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    IO();
    int truongdoan = 1;
    cin >> truongdoan;

    while(truongdoan-->0)
    {
        Solve();
    }

    return 0; 
}