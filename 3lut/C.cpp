#include<cstdio>
#include<iostream>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
#include<vector>
#include<cstring>
#include<string>
#include<list>
#include<stack>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

int n, tab[150], res, used;

vector<int> v[200];

int main()
{
  
  scanf("%d", &n);
  REP(i, n)
    scanf("%d", &tab[i]);
    
  sort(tab, tab+n);
  
  while(used < n)
  {
    res++;
    int h = 0;
    REP(i, n)
      if(tab[i] >= h)
      {
	tab[i] = -1;
	h++;
	used++;
      }
  }
  printf("%d\n", res);
  
  return 0;
}