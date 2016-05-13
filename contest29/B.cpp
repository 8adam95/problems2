#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)

int n, k, l, r, suma, sumak, a[1005], mini;

int main()
{
  scanf("%d %d %d %d %d %d", &n, &k, &l, &r, &suma, &sumak);
 
  REP(i, n)
    a[i] = l;
  sumak -= k*l;
  suma -= n*l;
  mini = r;
  
  while(sumak > 0)
  REP(i, k)
  {
    a[i]++;
    sumak--;
    suma--;
    if(sumak == 0)
      break;
  }
  while(suma > 0)
  FOR(i, k, n-1)
  {
    if(suma <= 0)
      break;
      a[i]++;
      suma--;
    if(suma <= 0)
      break;
  }
  REP(i, n)
    printf("%d ", a[i]);
  printf("\n");
    
  return 0;
}