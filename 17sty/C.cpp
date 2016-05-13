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

const int MAXN = 100005;

int n, tab[MAXN], vis[10000000], ile, jaka, jaka1, jakie[10000000];

bool jest[10000000];

int main()
{
  scanf("%d", &n);
  REP(i, n)
    scanf("%d", &tab[i]), jest[tab[i]] = true;
  
  if(n == 1)
    return printf("-1\n"), 0;
  
  sort(tab, tab+n);
  
  int ileRoznych = 0;
  
  FOR(i, 0, n-1)
  {
    jakie[tab[i]]++;
    if(jakie[tab[i]] == 1)
      ileRoznych++;
    if(ileRoznych > 1)
      if(jakie[tab[i]] > 1)
	return printf("0\n"), 0;
  }
  
  FOR(i, 1, n-1)
    if(vis[tab[i]-tab[i-1]] == 0)
      vis[tab[i]-tab[i-1]]++, ile++, jaka1 = jaka,  jaka = tab[i]-tab[i-1];
    
    
  if(ile == 1)
  {
    bool visited = false;
    int k;
    
    FOR(i, tab[0], tab[n-1])
      if(i-tab[0] == tab[n-1]-i)
	if(!jest[i])
	{
	  visited = true, k = i;
	  break;
	}
    
    if(visited == true)
      printf("3\n%d %d %d\n", tab[0] - (tab[1]-tab[0]), k, tab[n-1] + (tab[1]-tab[0]));
    
    else
    {
      printf("2\n%d ", tab[0] - (tab[1]-tab[0]));
      printf("%d\n", tab[n-1] + (tab[1]-tab[0]));
    }
    return 0;
  }   
  
  if(ile >= 3)
    return printf("0\n"), 0;
  
  if(ile == 2)
  {
    printf("%d\n", 1);
    
    REP(i, n)
      if(tab[i] + jaka1 != tab[i+1] && i+1 != n)
	return printf("%d\n", tab[i]+jaka1), 0;
    REP(i, n)
      if(tab[i] + jaka != tab[i+1] && i+1 != n)
	return printf("%d\n", tab[i]+jaka), 0;
  }
  
  
    
  return 0;
}
