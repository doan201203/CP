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
    string s;
    cin >> s;
    int pos = -1 , b = 0 , r = 0;
    for(int i = 0 ; i < sz(s) ; i++)
    { 
        if(s[i] == 'R') ++r;
        else ++b;
        if(r > b)
        {
            r = b = 0;
            pos = i + 1;
        }
    }
    if(pos == -1) pos = 0;
    cout << pos << "\n";
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