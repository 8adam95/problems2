#include<cstdio>
#include<algorithm>
#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<set>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define S second
#define F first
#define MP make_pair
#define PB push_back

const int MAXN = 1005;

int n, m, c1, c2, c3, c4, a[MAXN],b[MAXN], mini, tro, bus, cnt, tab[MAXN], tab1[MAXN];

int main()
{
  scanf("%d %d %d %d", &c1, &c2, &c3, &c4);
  scanf("%d %d", &n, &m);
  REP(i, n)
    scanf("%d", &a[i]);
  REP(i, m)
    scanf("%d", &b[i]);
  mini = c4;
  
  REP(i, n)
  {
    if(a[i]*c1 <= c2)
      tab[i] = a[i]*c1;
    else
      tab[i] = c2;
    cnt += tab[i];
  }
  if(cnt <= c3)
    bus = cnt;
  else
    bus = c3;
  cnt = 0;
  REP(i, m)
  {
    if(b[i]*c1 <= c2)
      tab1[i] = b[i]*c1;
    else
      tab1[i] = c2;  
    cnt += tab1[i];
  }
  if(cnt <= c3)
    tro = cnt;
  else
    tro = c3;
  if(mini > tro+bus)
    mini = tro+bus;
  
  printf("%d\n", mini);
    
  return 0;
}