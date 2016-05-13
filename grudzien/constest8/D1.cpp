#include<cstdio>
#include<algorithm>
#include<iostream>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<cstring>
#include<string>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long 
#define F first
#define S second
#define MP make_pair
#define PB push_back

const int MAXN = 200005;

int n, a[MAXN], nr[MAXN], m, c[MAXN];

int main()
{
  scanf("%d", &n);
  FOR(i, 1, n)
    scanf("%d", &a[i]), nr[i] = i;
    
  scanf("%d", &m);
  
  while(m--)
  {
    int kupa;
    scanf("%d", &kupa);
    if(kupa == 1)
    {
      int ile, gdzie, l;
      scanf("%d %d", &gdzie, &ile);
      l = nr[gdzie];
      while(c[l] + ile >= a[l] && l <= n)
      {
	ile -= (a[l] - c[l]);
	c[l] = a[l];
	l++;
      }
      if(l <= n)
	c[l] += ile;
      FOR(i, nr[gdzie], l-1)
	nr[i] = l;
      nr[gdzie] = l;
    }
    else
    {
      int gdzie;
      scanf("%d", &gdzie);
      printf("%d\n", c[gdzie]);
      
    }
  }
  return 0;
}