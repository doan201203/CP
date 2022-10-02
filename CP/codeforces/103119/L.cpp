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
    int n;
    cin >> n;
    double ans = 1;
    for(int i = 1 ; i <= n ; i++) ans *= (long double) i * i , ans /= (long double) n;
    printf("%.15lf" , ans);
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
