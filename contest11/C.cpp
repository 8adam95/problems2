#include<cstdio>
#include<iostream>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

int tab[15], l, n;

int main()
{
  scanf("%d", &n);
  if(n == 0)
  {
    printf("O-|-OOOO\n");
    return 0;
    
  }
  while(n > 0)
  {
    tab[l] = n%10;
    n /= 10;
    l++;
  }
  FOR(i, 0, l-1)
  {
    bool a = false;
    int ile = 0;
    if(tab[i] >= 5)
    {
      printf("-O|");
      tab[i] -= 5;
    }
    else
    {
     printf("O-|"); 
    }
    while(tab[i] > 0)
    {
      printf("O");
      ile++;
      tab[i]--;
    }
    if(ile < 4)
    {
      printf("-");
      a = true;
    }
    while(ile < 4)
    {
      printf("O");
      ile++;
    }
    if(a == false)
      printf("-");
    printf("\n");
    
  }
  
  
  return 0;
}