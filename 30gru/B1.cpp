#include<cstdio>
#include<iostream>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<algorithm>

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

const int MAXN = 303;

int n, a[MAXN], l, ile;
bool ruch1, ruch2, ost;

int main()
{
  scanf("%d", &n);
  FOR(i, 1, n)
    scanf("%d", &a[i]), ile += a[i];
  FOR(i, 1, n)
  {
    if(i > 1)
    {
      while(a[i]--)
	printf("PLR"), ile--;
    }
    else
    {
	while(a[i]--)
	  printf("PRL"), ile--;
    }
    if(ile == 0)
    {
      printf("\n");
      return 0;
    }
    printf("R");
  }
  printf("\n");
  return 0;
}