#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<cstring>
#include<algorithm>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

int n, tab[5005];;

int main()
{
  scanf("%d", &n);
  if(n == 1)
  {
    printf("1\n1");
    return 0;
  }
  if(n == 2)
  {
    printf("1\n1");
    return 0;
  }
  if(n == 3)
  {
    printf("2\n1 3");
    return 0;
  }
  if(n == 4)
  {
    printf("4\n2 4 1 3\n");
    return 0;
  }
  printf("%d\n", n);
  int k = 1;
  for(int i = 1; i <= n; i += 2)
      tab[k] = i, k++;
  for(int i = 2; i <= n; i += 2)
    tab[k] = i, k++;
  for(int i = 1; i <= n; i++)
    if(tab[i] == tab[i+1]+1 || tab[i] == tab[i+1]-1)
      FOR(j, 1, n)
	if(tab[j+1] != tab[i+1]+1 && tab[j+1] != tab[i+1]-1 && tab[j-1] != tab[i+1]+1 && tab[j-1] != tab[i+1]-1)
	  swap(tab[j], tab[i+1]);
  FOR(i, 1, n)
    printf("%d ", tab[i]);
  
  return 0;
}