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

const int MAXN = 200006;

int n, tab[MAXN], res[MAXN];
pair<int, int> B[MAXN];

int main()
{
  scanf("%d", &n);
  REP(i, n)
    scanf("%d", tab+i), B[i] = MP(tab[i], i);
  
  sort(B, B+n);
  
  int k = n;
  int val = 0;
  int r = -1, l = 0;
  for(int i = 1; i <= n; i++)
  {
    if(r-l+1 >= i)
      res[i] = val;
    else
    for(int p = k-1; p >= 0; p--)
    {
      val = B[p].F;
      int gdz = B[p].S;
      r = gdz, l = gdz;
    
      while(tab[l-1] >= val && l >= 1)
	  l--;
	while(tab[r+1] >= val && r < n-1)
	  r++;
      if(r-l+1 >= i)
      {
	res[i] = val;
	break;
      }
    }
    
  }
  for(int i = 1; i <= n; i++)
    printf("%d ", res[i]);
  printf("\n");
  
  return 0;
}