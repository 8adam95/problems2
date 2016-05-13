#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
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

const int M = 1<<20;

vector<int> adj[M];

queue<int> Q;
bool visited[M];
int n, m, w[2*M], tab[M], parent[M];

void Insert(int pos, int co)
{
  w[pos] += co;
  
  for(int i = 0; i < adj[pos].size(); i++)
    if(parent[adj[pos][i]] != pos)
      Insert(adj[pos][i], -co);
}


void dfs()
{
  visited[1] = true;
  parent[1] = -1;
  
  Q.push(1);
  
  while(!Q.empty())
  {
    int v = Q.front();
    Q.pop();
    for(int i = 0; i < adj[v].size(); i++)
      if(!visited[adj[v][i]])
	visited[adj[v][i]] = true, parent[adj[v][i]] = v;
  }
}


int main()
{
  scanf("%d %d", &n, &m);
  
  FOR(i, 1, n)
  {
    scanf("%d", &tab[i]);
    Insert(i, tab[i]);
  }
  REP(i, n-1)
  {
    int u, v;
    
    scanf("%d %d", &u, &v);
    adj[u].PB(v);
    adj[v].PB(u);
  }
  dfs();
  
  REP(i, m)
  {
    int co, gdzie, ile;
    scanf("%d", &co);
    
    if(co == 1)
      scanf("%d %d", &gdzie, &ile), Insert(gdzie, ile);
    else
      scanf("%d", &gdzie), printf("%d\n", w[gdzie]);
  }
  
  return 0;
}