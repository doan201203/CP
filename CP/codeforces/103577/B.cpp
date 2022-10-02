#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array
 
template<typename T>
istream& operator >> (istream& in , vector<T> &a)
{
    for(T &i : a) in >> i;
    return in;
}
 
template<typename T>
ostream& operator << (ostream& out ,const vector<vector<T>> &a)
{
    for(const T &i : a)
    {
        for(const T &j : i)
            out << i << ' ';
        out << '\n';
    }
    return out;
}
 
void IO()
{
    cin.tie(0) -> sync_with_stdio(false);
    if(fopen("in" , "r"))
        freopen("in" , "r" , stdin);
}
 
void Solve()
{
    
    
    int n , m;
    while(cin >> n >> m){
    ll ans = 1;
    for(int i = 0 ; i < m ; i++)
    {
        int u , v , c;
        cin >> c >> u >> v;
        if(c % 2) ans *= c;
    }
    cout << ans << '\n';
    }
}
 
int main()
{
    IO();
    int truongdoan = 1;
    //cin >> truongdoan;
    while(truongdoan--)
        Solve();
    return 0; 
}
