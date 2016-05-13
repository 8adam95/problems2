#include<cstdio>
#include<algorithm>
#include<iostream>
#include<vector>
#include<queue>
#include<set>
#include<map>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long 
#define F first
#define S second
#define MP make_pair
#define PB push_back

const int MAXN = 100005;

int n, j, k, t, tab[MAXN];
vector<int> adj[MAXN], ans;
bool check[MAXN], V[MAXN];

void dfs(int n)
{
  V[n] = 1;
  for(int i = 0; i < adj[n].size(); i+=2)
  {
    int r = adj[n][i], p = adj[n][i+1];
    if(V[r])
      continue;
    if(p == 2)
      check[r] = 1, tab[n]++;
    dfs(r);
    tab[n] += tab[r];
  }
  
}

int main()
{
  scanf("%d", &n);
  FOR(i, 1, n-1)
  {
    scanf("%d %d %d", &j, &k, &t);
    adj[j].PB(k), adj[j].PB(t);
    adj[k].PB(j), adj[k].PB(t);
  }
  dfs(1);
  FOR(i, 2, n)
    if(check[i] && !tab[i])
      ans.PB(i);
  printf("%d\n", (int)ans.size());
  REP(i, ans.size())
    printf("%d ", ans[i]);
  printf("\n");
  
  return 0;
}