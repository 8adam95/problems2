#include<cstdio>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long

int n, m, d, a[105], ile;

int main()
{
  scanf("%d %d", &n, &d);
  REP(i, n)
    scanf("%d", &a[i]);
    
  sort(a, a+n);
  
  scanf("%d", &m);
  
  for(int i = 0; i < min(n, m); i++)
    ile += a[i];
  
  if(n >= m)
    return printf("%d\n", ile), 0;
  
  m -= n;
  return printf("%d\n", ile-m*d), 0;

  return 0;
}