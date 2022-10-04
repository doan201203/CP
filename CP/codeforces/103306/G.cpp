#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void IO()
{
    cin.tie(0) -> sync_with_stdio(false);
    // if(fopen("in" , "r"))
        // freopen("in" , "r" , stdin);
}

void Solve()
{
    ll n;   cin >> n;
    ll l2 = ((n - 3) / 6);
    ll l1 = 2;
    ll l3 = l2 - l1;
    cout << min({abs(l1 - l2) , abs(l2 - l3) , abs(l3 - l1)}) << '\n'; 
}

int main()
{
    IO();
    int truongdoan = 1;
    cin >> truongdoan;
    while(truongdoan-->0)
        Solve();
    return 0; 
}