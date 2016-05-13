#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)

const int MAXN = 2005;

int n, a[MAXN];

int main()
{
  scanf("%d", &n);
  REP(i, n)
    scanf("%d", a+i);

  sort(a, a+n);

  int maks = 0;
  
  maks = a[n-1];
  
  int i = 1;
  
  
  while(true)
  {
    if(maks <= 0)
    {
      printf("%d\n", i);
      return 0;
    }
    
    if(maks-a[i] <= 0)
    {
      printf("%d\n", i+1);
      return 0;
    }
    maks -= a[i];
    i++;
    
  }
   
  
  return 0;
}