#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

int n, m, k, ile, a;

int main()
{
  scanf("%d %d %d", &n, &m, &k);
  REP(i, n)
  {
    scanf("%d", &a);
    if(a == 1)
    {
      if(m > 0)
	m--;
      else
	ile++;
    }
    if(a == 2)
    {
      if(k > 0)
      {
	k--;
      }
      else if(m > 0)
	m--;
      else
	ile++;
    }
  }
  printf("%d\n", ile);

  return 0;
}