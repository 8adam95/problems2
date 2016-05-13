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
bool ruch1, ruch2;

int main()
{
  scanf("%d", &n);
  FOR(i, 1, n)
    scanf("%d", &a[i]), ile += a[i];
    
  l = 1;
  while(ile)
  {
    ruch1 = false, ruch2 = false;
    
    if(a[l] > 0)
      printf("P"), ile--, a[l]--, ruch1 = false, ruch2 = false;
    
    if(a[l-1] > 0)
      printf("L"), l--, ruch1 = true;
    
    if(a[l+1] > 0 && ruch1 == false)
      printf("R"), l++, ruch2 = true;
    
    if(ruch1 == true || ruch2 == true)
      printf("P"), a[l]--, ile--, ruch1 = false, ruch2 = false;
    
    if(ruch1 == false && ruch2 == false && l < n && ile > 0)
      l++, printf("R");
    else if(ruch1 == false && ruch2 == false && l == n && ile > 0)
      l--, printf("L");
  }
  printf("\n");
  return 0;
}