#include<cstdio>
#include<iostream>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
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
const int MOD = 1000000007;

int n, m, k, v, u, suma[MAXN], potega[MAXN], jest[MAXN];
long long res;

int main()
{
  scanf("%d %d %d", &n, &m, &k);
  while(m--)
  {
    scanf("%d %d", &u, &v);
    if(v-u == 1)
      continue;
    if(v-u != k+1)
      return printf("0\n"), 0;
    jest[u] = 1;
  }
  
  suma[0] = 0;
  FOR(i, 1, n)
    suma[i] = suma[i-1] + jest[i];
    
  potega[0] = 1;
  FOR(i, 1, n)
    potega[i] = (potega[i-1]*2)%MOD;
  
  if(suma[n] == 0)
    res++;
  
  for(int i = 1; i + k + 1 <= n; i++)
  {
    if(suma[i-1] > 0 || suma[i+k] < suma[n])
      continue;
    int pr = min(i+k, n-k-1);
    int opcji = (pr-i) - (suma[pr] - suma[i]);
    res += potega[opcji];
  }
  
  res %= MOD;
  if(res < 0 )
    res += MOD;
  
  cout << res << "\n";
  
  return 0;
}