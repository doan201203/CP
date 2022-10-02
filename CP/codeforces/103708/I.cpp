#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void IO()
{
    cin.tie(0) -> sync_with_stdio(false);
    if(fopen("in" , "r"))
        freopen("in" , "r" , stdin);
}

void Solve()
{
    string s;
    cin >> s;
    ll n = stoll(s) , ans = 0;
    for(int i = 0 ; i < (int) s.size() ; i++)
    {
        if(s[i] == '0') continue;
        else
        {
            int num = s[i] - '0'; 
            if(n % num == 0) ++ans;
        }
    }
    cout << ans << '\n';
}

int main()
{
    IO();
    int truongdoan = 1;
    //cin >> truongdoan;
    while(truongdoan-->0)
        Solve();
    return 0; 
}
