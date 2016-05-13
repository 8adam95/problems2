#include<cstdio>
#include<algorithm>
using namespace std;

#define LL long long
#define REP(I, N) for(int I = 0; I < (N); I++)


int n,m, a[105], b[105];

int main()
{
  scanf("%d %d", &n, &m);
  REP(i, n) 
    scanf("%d", &a[i]);
  REP(i, m)
    scanf("%d", &b[i]);
  
  sort(a, a+n);
  sort(b, b+m);
  if(2*a[0] >= b[0])
    return printf("-1\n"), 0;
  
  if(a[n-1] >= b[0])
    return printf("-1\n"), 0;
  
  printf("%d\n", max(a[n-1], 2*a[0]));
  
}