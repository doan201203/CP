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
    int b = 0 , a = 0 , n = sz(s);
    s = " " + s;
    bool sts = 0;
    int lst = -1;
    for(int i = 1 ; i <= n ; i++)
    {
        if(sts)
        {
            b += s[i] == 'R' ? 1 : 0;
        }
        else
        {
            a += s[i] == 'R' ? 1 : 0;
        }
        cout << "Alice : " << a << ' ' << "Bob : " << b << '\n';
        if(a > b)
        {
            lst = i;
            break;
        }
        sts ^= 1;
    }
    cout << lst << '\n';
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