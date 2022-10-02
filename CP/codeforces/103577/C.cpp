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
const int N = 5004;
ll nxt[N];
 
int get_kmp(string s)
{
    int n = s.size();
    nxt[0] = nxt[1] = 0;
    for(int i = 1 ; i < n ; i++)
    {
        int j = nxt[i];
        while(j && s[i] != s[j]) j = nxt[j];
        if(s[i] == s[j])
        {
            nxt[i + 1] = j + 1;
        }
        else nxt[i + 1] = 0;
    }
    int nnn = 0;
    for(int i = 0 ; i <= n ; i++)
    {
        nnn += nxt[i];
    }
    return nnn;
}
void Solve()
{
    string s;   
    while(cin >> s)
    {
        ll ans = 0;
        for(int i = 0 ; i < (int)s.size() ; i++)
        {
            // cout << s.substr(i) << '\n';
            ans += get_kmp(s.substr(i));
        }
        cout << ans << "\n";
    }
    
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