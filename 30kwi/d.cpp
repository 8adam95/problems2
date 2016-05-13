#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<cstring>
#include<string>
#include<list>
#include<stack>
#include<queue>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long 
#define F first
#define S second
#define MP make_pair
#define PB push_back

const int MAXN = 1000006;

bool vis[MAXN];
queue<int> Q;
int d[MAXN], n, m, parent[MAXN];
vector<int> adj[MAXN], path;


void bfs(int v)
{
  vis[v] = true;
  d[v] = 0;
  Q.push(v);
  parent[v] = -1;
  while(!Q.empty())
  {
    int u = Q.front();
    Q.pop();
    
    for(int i = 0; i < adj[u].size(); i++)
      if(!vis[adj[u][i]])
      {
	vis[adj[u][i]] = true;
	d[adj[u][i]] = d[u] + 1;
	Q.push(adj[u][i]);
	parent[adj[u][i]] = u;
      }
  }
  
}

int main()
{
  scanf("%d %d", &n, &m);
  while(m--)
  {
      int u, v;
      scanf("%d %d", &u, &v);
      u--, v--;
      adj[u].PB(v);
      adj[v].PB(u);
  }
  
  bfs(0);
  printf("%d\n", d[n-1]);
  
  int u = n-1;
  while(u != 0)
  {
    path.PB(u);
    u = parent[u];
  }
  path.PB(0);
  reverse(path.begin(), path.end());
  
  for(int i = 0; i < path.size(); i++)
    printf("%d ", path[i]+1);
  printf("\n");
  
  return 0;
}