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
int n , m;
const int N = 1002;
const int dx[8] = {0 , 0 , 1 , -1 , 1 , -1 , 1 , -1};
const int dy[8] = {-1 , 1 , 0 , 0 , 1 , -1 , -1 , 1};
char a[N][N];
bool ok[N][N];
int ans = -1;
bool inside(int i , int j)
{
    return i >= 1 && i <= n && j >= 1 && j <= m && !ok[i][j];
}
void dfs(int i , int j , int cnt)
{
    ok[i][j] = 1;
    cout << a[i][j] << ' ';
    ans = max(ans , cnt);
    for(int k = 0 ; k < 8 ; k++)
    {
        int ui = i + dx[k];
        int uj = j + dy[k];
        if(!inside(ui , uj)) continue;
        
        if(a[ui][uj] - a[i][j] == 1)
        {
            dfs(ui, uj ,cnt + 1);
        }
    }
}

void Solve()
{
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= m ; j++)
        {
            cin >> a[i][j];
        }
    }

    for(char c = 'A' ; c <= 'Z' ; c++)
    {
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = 1 ; j <= m ; j++)
            {
                if(c == a[i][j] && !ok[i][j])
                {
                    dfs(i , j , 1);
                    // cout << "END\n";
                }
            }
        }
    }
    cout << ans;
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
