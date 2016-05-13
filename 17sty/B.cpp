#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

int a, b, w, x, c, ile;

int main()
{
  scanf("%d %d %d %d %d", &a, &b, &w, &x, &c);
  
  while(c > a)
  {
    ile++;
    c--;
    if(b >= x)
      b -= x;
    else
      a--, b = w-(x-b);
    
  }
  printf("%d\n", ile);
  
  return 0;
}