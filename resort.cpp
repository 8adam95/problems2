#include<cstdio>
#include<algorithm>
#include<queue>
#include<set>
#include<map>
#include<iostream>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define PB push_back

int n, type[100005], b[100005], maks, d[100005], odKtorego, tab[100005], l, ile[100005];
vector<int> adj[100005];
queue<int> Q;
bool visited[100005];

const int MAXN = 100005;

int dfs(int a)
{
  bool vis = false;
  fill(d, d+MAXN, 0);
  fill(visited, visited+MAXN, false);
  d[a] = 1;
  maks = 1;
  Q.push(a);
  visited[a] = true;
  while(!Q.empty())
  {
    int u = Q.front();
    Q.pop();
    if((type[u] == 1 && vis == false) || type[u] == 0)
    {
    for(int i = 0; i < adj[u].size(); i++)
      if(!visited[adj[u][i]])
      {
	visited[adj[u][i]] = true;
	d[adj[u][i]] = d[u]+1;
	if(d[adj[u][i]] >= maks)
	  maks = d[adj[u][i]], odKtorego = a;
	Q.push(adj[u][i]);
      }
      vis = true;
    }
  }
  return maks;
}

int dfs1(int a)
{
  bool vis = false;
  fill(visited, visited+MAXN, false);
  Q.push(a);
  visited[a] = true;
  while(!Q.empty())
  {
    int u = Q.front();
    
    if(type[u] == 1 && vis == true)
      return 0;
    if(type[u] == 1 && vis == false)
      vis = true;
    tab[l] = u;
    l++;
    Q.pop();
    for(int i = 0; i < adj[u].size(); i++)
      if(!visited[adj[u][i]])
      {
	visited[adj[u][i]] = true;
	Q.push(adj[u][i]);
      }
  }
  
  return 0;
}


int main()
{
  scanf("%d", &n);
  for(int i = 1; i <= n; i++)
    scanf("%d", &type[i]);
  
  for(int i = 1; i <= n; i++)
  {
    scanf("%d", &b[i]);
    if(b[i] != 0)
      ile[b[i]]++;
  }
  for(int i = 1; i <= n; i++)
    if(ile[b[i]] == 1)
      adj[i].PB(b[i]);
      
  int res = -1;
  for(int j = 1; j <= n; j++)
    if(type[j] == 1)
      res = max(res, dfs(j));
    
  printf("%d\n", res);
  if(res == 1)
    for(int j = 1; j <= n; j++)
      if(type[j] == 1)
	return printf("%d\n", j), 0;
  dfs1(odKtorego);
  for(int i = l-1; i >= 0; i--)
    printf("%d ", tab[i]);
  printf("\n");
  
  return 0;
}