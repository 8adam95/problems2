#include<cstdio>
#include<iostream>
#include<queue>
#include<set>
#include<map>
#include<vector>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

const int MAXN = 3005;

int n;
vector<int> adj[MAXN];
bool vis[MAXN];

void dfs(int v)
{
  vis[v] = true;
  
  
}


int main()
{
  scanf("%d", &n);
  REP(i, n)
  {
    int u, v;
    adj[u].PB(v);
    adj[v].PB(u);
  }
  
  dfs(1);

  return 0;
}