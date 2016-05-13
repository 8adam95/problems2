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

const int MAXN = 16;

int n, l, r, x, c[MAXN], cnt, tab[20];
int pot[MAXN];

void pote()
{
  pot[0] = 1;
  FOR(i, 1, 16)
    pot[i] = pot[i-1]*2;
}

int main()
{
  pote();
  scanf("%d %d %d %d", &n, &l, &r, &x);
  REP(i, n)
    scanf("%d", &c[i]);
    
  REP(i, pot[n])
  {
    int mini = 10000000;
    int maks = -1;
    FOR(j, 0, 20)
      tab[j] = 0;
    int p = i, j = 0;
    while(p)
      tab[j++] = p%2, p/=2;
    
    int suma = 0;
    for(int k = n-1; k >= 0; k--)
      if(tab[k] > 0)
	suma += c[k], maks = max(maks, c[k]), mini = min(mini, c[k]);
    if(suma >= l && suma <= r && maks-mini >= x)
      cnt++;
    
  }
    
  printf("%d\n", cnt);
    
  return 0;
}