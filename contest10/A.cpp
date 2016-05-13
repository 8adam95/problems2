#include<cstdio>
#include<algorithm>
#include<set>
#include<iostream>
#include<map>
#include<vector>
#include<queue>

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

int n, k;

int main()
{
  scanf("%d %d", &n, &k);
  for(int i = 1; i <= n; i++)
  {
    for(int j = 1; j <= n; j++)
    {
      if(i == j)
	printf("%d ", k);
      else
	printf("0 ");
    }
    printf("\n");
  }
  return 0;
}