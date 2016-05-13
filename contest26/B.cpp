#include<cstdio>
#include<algorithm>
#include<iostream>

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long

const int MAXN = 100005;

int n, m, tab[MAXN], ile[MAXN], a;
bool is[MAXN];


int main()
{
  scanf("%d %d", &n, &m);
  REP(i, n)
    scanf("%d", &tab[i]);
  FORD(i, n-1, 0)
  {
    if(is[tab[i]] != true)
      is[tab[i]] = true, ile[i] = ile[i+1]+1;
    else
      ile[i] = ile[i+1];
  }
  while(m--)
  {
    scanf("%d", &a);
    printf("%d\n", ile[a-1]);
  }
  return 0;
}