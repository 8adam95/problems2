#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<string>
#include<cstring>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

int n, k, p, tab[100006], parz, nparz;
vector<int> Parzyste, NieParzyste;
vector<int> V[100006];

int main()
{
  scanf("%d %d %d", &n, &k, &p);
  REP(i, n)
  {
    scanf("%d", tab+i);
    if(tab[i] % 2 == 0)
      parz++, Parzyste.PB(tab[i]);
    else
      nparz++, NieParzyste.PB(tab[i]);
  }
  
  int ileMaBycNieparzystych = k-p;
  
  if(nparz < ileMaBycNieparzystych)
    return printf("NO\n"), 0;
  
  while(!Parzyste.empty())
  for(int i = 1; i <= p; i++)
  {
    if(!Parzyste.empty())
    {
      V[i].PB(Parzyste.back());
      Parzyste.pop_back();
    }
    else if(NieParzyste.size() >= 2 && V[i].empty())
    {
      V[i].PB(NieParzyste.back());
      NieParzyste.pop_back();
      V[i].PB(NieParzyste.back());
      NieParzyste.pop_back();
    }
  }
  
  for(int i = p+1; i <= k; i++)
  {
    if(NieParzyste.size() >= 1)
    {
      V[i].PB(NieParzyste.back());
      NieParzyste.pop_back();
    }
  }
  if(NieParzyste.size() % 2 == 0)
  {
    while(!NieParzyste.empty())
    {
      for(int i = 1; i <= p; i++)
      {
	if(NieParzyste.size() >= 2)
	{
	  V[i].PB(NieParzyste.back());
	  NieParzyste.pop_back();
	  V[i].PB(NieParzyste.back());
	  NieParzyste.pop_back();
	}
      }
    }
  }
    
  for(int i = 1; i <= k; i++)
    if(V[i].empty())
      return printf("NO\n"), 0;
  
  if(NieParzyste.size() > 0 || Parzyste.size() > 0)
    return printf("NO\n"), 0;
  
  printf("YES\n");
  for(int i = 1; i <= k; i++)
  {
    printf("%d ", (int)V[i].size());
    for(vector<int>::iterator it = V[i].begin(); it != V[i].end(); it++)
      printf("%d ", *it);
   printf("\n"); 
  }
  
  return 0;
}