#include<cstdio>
#include<iostream>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
#include<cstring>
#include<fstream>
#include<string>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define ll long long 
#define F first
#define S second
#define MP make_pair
#define PB push_back

const int MAXN = 200005;

int n, f[MAXN], g[MAXN];
vector<pair<int, int> > adj[MAXN];

void calc(int u, int parent)
{
  for(int i = 0; i < adj[u].size(); i++)
  {
    int v = adj[u][i].F;
    int cost = adj[u][i].S;
    
    if(v == parent)
      continue;
    g[v] = g[u]-cost+(1-cost);
    calc(v, u);
  }
}

void dfs(int u, int parent)
{
  f[u] = 0;
  for(int i = 0; i < adj[u].size(); i++)
  {
    int v = adj[u][i].F;
    int cost = adj[u][i].S;
    if(v == parent)
      continue;
    dfs(v, u);
    f[u] += f[v] + cost;
  }
}


int main()
{
  scanf("%d", &n);
  FOR(i, 1, n-1)
  {
    int u, v;
    scanf("%d %d", &u, &v);
    u--, v--;
    adj[u].PB(MP(v,0));
    adj[v].PB(MP(u,1));
  }
  
  dfs(0, -1);
  g[0] = f[0];
  calc(0, -1);
  int ans = *min_element(g, g+n);
  printf("%d\n", ans);
  
  REP(i, n)
    if(g[i] == ans)
      printf("%d ", i+1);
    
  printf("\n");
  
  
  return 0;
}