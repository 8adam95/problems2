#include<cstdio>
#include<algorithm>
#include<queue>
#include<set>
#include<map>
#include<vector>
#include<iostream>
#include<bitset>
#include<math.h>
using namespace std;

const int MAXN = 100005;

int n, m, a, b[MAXN], p[MAXN];

int main()
{
  scanf("%d %d %d", &n, &m, &a);
  for(int i = 0; i < n; i++)
    scanf("%d", &b[i]);
  for(int i = 0; i < m; i++)
    scanf("%d", &p[i]);
  sort(b, b+n);
  sort(p, p+m);
  int l = 0, r = min(n, m);
  while(l < r)
  {
    int m = (l+r+1)>>1;
    long long need = 0;
    for(int i = 0; i < m; i++)
      need += p[i] - min(p[i], b[n-m+i]);
    if(need <= a)
      l = m;
    else
      r = m-1;
  }
  long long suma = 0;
  for(int i = 0; i < l; i++)
    suma += p[i];
  cout << l << " " << max(suma-a, 0ll) << "\n";

  return 0;
}