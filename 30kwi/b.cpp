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

const int MAXN = 1005;

int n, k, p, x, y, tab[MAXN], sum, cnt;

int main()
{
  scanf("%d %d %d %d %d", &n, &k, &p, &x, &y);
  FOR(i, 1, k)
  {
    scanf("%d", tab+i);
    if(tab[i] < y)
      cnt++;
    sum += tab[i];
  }
  
  if(cnt <= n/2)
  {
    int c1 = min(n/2-cnt, n-k);
    int c2 = n-c1-k;
    sum += c1 + c2*y;
    if(sum > x)
      return printf("-1\n"), 0;
    FOR(i, 1, c1)
      printf("1 ");
    FOR(i, 1, c2)
      printf("%d ", y);
  }
  else
    return printf("-1\n"), 0;
  
  

  return 0;
}