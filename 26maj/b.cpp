#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<cstring>
#include<string>
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

bool tab[505][505];

int ile[505][505], ile2[505][505];
int n, m, q, row[505];

void uaktualnij1(int p)
{
  FOR(j, 1, m)
  {
    if(tab[p][j] == 1)
      ile[p][j] = ile[p][j-1] + tab[p][j], row[p] = max(row[p], ile[p][j]); 
    else
      ile[p][j] = 0;
  }
}

void uaktualnij2(int p)
{
  FORD(j, m, 1)
  {
    if(tab[p][j] == 1)
      ile2[p][j] = ile2[p][j+1] + tab[p][j], row[p] = max(row[p], ile2[p][j]);
    else
      ile2[p][j] = 0;
  }
}

int main()
{
  scanf("%d %d %d", &n, &m, &q);
  FOR(i, 1, n)
    FOR(j, 1, m)
      cin >> tab[i][j];
      
  FOR(i, 1, n)
    uaktualnij1(i);
      
  FOR(i, 1, n)
    uaktualnij2(i);
      
  while(q--)
  {
    int i, j;
    scanf("%d %d", &i, &j);
    row[i] = 0;
    if(tab[i][j] == 1)
      tab[i][j] = 0, uaktualnij1(i), uaktualnij2(i);
    else
      tab[i][j] = 1, uaktualnij1(i), uaktualnij2(i);
    
    int res = 0;
    for(int k = 1; k <= n; k++)
      res = max(res, row[k]);
    printf("%d\n", res);
  }
  
  return 0;
}