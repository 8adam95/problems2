#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<map>
using namespace std;


#define ll long long
#define MP make_pair
#define PB push_back
#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)

int n, tab[105], roznychL, roznychR, tabka[150], Left[150], Right[150], ileL, ileR;

pair<int, int> B[105];

int main()
{
  scanf("%d", &n);
  FOR(i, 1, 2*n)
  {
    scanf("%d", &tab[i]);
    B[i] = make_pair(tab[i], i);
  }
  sort(B+1, B+2*n+1);
 
  FOR(i, 1, 2*n)
  {
    if(ileL <= ileR)
    {
      if(Left[B[i].first] <= Right[B[i].first])
      {
	Left[B[i].first]++;
	tabka[B[i].second] = 1;
	ileL++;
	if(Left[B[i].first] == 1)
	  roznychL++;
      }
      else
      {
	Right[B[i].first]++;
	ileR++;
	tabka[B[i].second] = 2;
	if(Right[B[i].second] == 1)
	  roznychR++;
      }
    }
    else
    {
      if(Right[B[i].first] <= Left[B[i].first])
      {
	Right[B[i].first]++;
	ileR++;
	tabka[B[i].second] = 2;
	if(Right[B[i].second] == 1)
	  roznychR++;
      }
      else
      {
	Left[B[i].first]++;
	tabka[B[i].second] = 1;
	ileL++;
	if(Left[B[i].first] == 1)
	  roznychL++;
	
      }
    }
  }
  FOR(i, 1, 140)
  {
   if(tabka[i] == 1)
   {
     if(vis[tabka[i]] == false)
       ile++, 
      vis[tabka[i]] 
     
   }
    
  }
  printf("%d\n", roznychL*roznychR);

  return 0;
}