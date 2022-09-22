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