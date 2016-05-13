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

int n, tab[105];

int main()
{
  scanf("%d", &n);
  REP(i, n)
    scanf("%d", tab+i);

  while(true)
  {
    sort(tab, tab+n);
    bool ok = false;
    
    REP(i, n)
      if(tab[i] != tab[0])
	tab[i] -= tab[0], ok = true;
      if(!ok)
	break;
  }
  int cnt = 0;
  REP(i, n)
    cnt += tab[i];
    
    printf("%d\n", cnt);
    
  return 0;
}