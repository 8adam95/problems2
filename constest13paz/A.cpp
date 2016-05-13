#include<cstdio>
#include<algorithm>
#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<set>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define S second
#define F first
#define MP make_pair
#define PB push_back

int k, d;

int main()
{
  scanf("%d %d", &k, &d);
  for(int i = 0; i <= k; i++)
  
  if(d == 0 && k >= 2)
    return printf("No solution\n"), 0;
  
  for(int i = 1; i <= k; i++)
  {
    for(int j = 9; j >= 0; j--)
    {
      if(d-j >= 0)
      {
	printf("%d", j);
	d -= j;
	break;
      }
      
      
    }
  }
  printf("\n");
  return 0;
}