#include<cstdio>
#include<algorithm>
#include<set>
#include<iostream>
#include<map>
#include<vector>
#include<queue>
using namespace std;


#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define MP make_pair
#define PB push_back

int n, m, tab[222226];

int main()
{
  scanf("%d %d", &n, &m);
  if(n == m)
    return printf("-1\n"), 0;
  FOR(i, 1, n)
    tab[i] = i;
  int j = 2+m;
  while(j+1 <= n)
  {
   swap(tab[j], tab[j+1]); 
   j+=2;
  }
  if(j == n)
    swap(tab[1], tab[n]);
  FOR(i, 1, n)
    printf("%d ", tab[i]);
  printf("\n");
  
  return 0;
}