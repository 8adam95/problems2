#include<cstdio>
#include<algorithm>
#include<iostream>
#include<vector>
#include<queue>
#include<set>
#include<map>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

int n, kupa, a, b;

int main()
{
  scanf("%d", &n);
  REP(i, n)
  {
    int u, v;
    scanf("%d %d", &u, &v);
    u %= 2;
    v %= 2;
    if(u+v == 1)
      kupa = 1;
    a += u, b += v;
  }
  if(a%2 == 0 && b%2 == 0)
    return printf("0\n"), 0;
  if(a%2 == 1 && b%2 == 1)
  {
    if(kupa)
      printf("%d\n", 1);
    else
      printf("%d\n", -1);
    return 0;
  }
  return printf("%d\n", -1), 0;
  return 0;
}