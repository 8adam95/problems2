#include<cstdio>
#include<iostream>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long 

const int MAXN = 200006;

int n, m, a[MAXN], b[MAXN], bestA, bestB, bestRes, res;


int score(int a[], int n, int x)
{
  int id = upper_bound(a, a+n, x)-a;
  return (2*id + 3*(n-id));
}

pair<int, int> choose(int x)
{
  int sa = score(a, m, x);
  int sb = score(b, n, x);
  return (make_pair(sa-sb, sa));
}

int main()
{
  scanf("%d", &m);
  REP(i, m)
    scanf("%d", a+i);
  scanf("%d", &n);
  REP(i, n)
    scanf("%d", b+i);
  
  sort(a, a+m);
  sort(b, b+n);
  
  pair<int, int> res(-1000000, -1000000);
  REP(i, m)
    res = max(res, choose(a[i]));
  
  REP(i, n)
     res = max(res, choose(b[i]));
     
  res = max(res, choose(0));
  res = max(res, choose(1000000));
  
  printf("%d:%d\n", res.second, res.second-res.first);
  
  return 0;
}