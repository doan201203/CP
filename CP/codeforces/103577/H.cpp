#include<bits/stdc++.h>
#define P pair<int,int>
using namespace std;
const int maxn=4e5+5;
int a[maxn];
int lst[300];
int n,m;
void win1() {puts("Grammy");}
void win2() {puts("Alice");}
int dp[300];
void sol(int p) {
  priority_queue<P>q;
  for(int i=0;i<256;i++) {
    if(lst[i]>=p) q.push(P(lst[i],i));
    dp[i]=-1;
  }
  for(int i = 1 ; i <= n ; i++)
  {
    // cout << lst[i] << ' ';
  }
  while(!q.empty()) {
    int u=q.top().second;
//   cout << "DOAN\n" << u << '\n';
    q.pop();
    for(int i=0;i<8;i++) {
      int v=u^(1<<i);
    //   cout << v << ' ' << bitset<8> (v) << '\n';
      if(dp[v]==0) dp[u]=1;
    }
    if(dp[u]!=1) dp[u]=0;
  }
//   cout << '\n';
  if(dp[a[p]]==1) win1();
  else win2();
}
int main() {
  scanf("%d%d",&n,&m);
  for(int i=1;i<=n;i++) scanf("%d",a+i),lst[a[i]]=i;
  while(m--) {
    int op,x;
    scanf("%d%d",&op,&x);
    if(op==1) {
      n++;
      a[n]=x;
      lst[x]=n;
    } else {
    //   if(lst[a[x]]!=x) {
    //     win1();
    //   } else {
        sol(x);
    //   }
    }
  }
  return 0;
}