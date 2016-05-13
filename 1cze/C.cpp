#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;

#define REP(I, N) for(int I = 0; i < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

int n, m, tab[2005], res;
bool jest[1005][1005];

int main()
{
  scanf("%d %d", &n, &m);
  
  for(int i = 1; i <= n; i++)
    scanf("%d", &tab[i]);
  
  for(int i = 1; i <= m; i++)
  {
    int u, v;
    scanf("%d %d", &u, &v);
    jest[u][v] = true;
    jest[v][u] = true;
  }
  
  while(true)
  {
    for(int i = 1; i <= n; i++)
    {
      int cost = 0;
      for(int j = 1; j <= n; j++)
	if(jest[i][j] && jest[j][i])
	  cost += tab[j];
      if(cost >= tab[i])
      {
	res += tab[i];
	for(int j = 1; j <= n; j++)
	  jest[i][j] = false, jest[j][i] = false;
      }
    }
    bool ok = true;
    for(int i = 1; i <= n; i++)
      for(int j = 1; j <= n; j++)
	if(jest[i][j] || jest[j][i])
	  ok = false;
    if(ok)
      return printf("%d\n", res), 0;
  }

  return 0;
}