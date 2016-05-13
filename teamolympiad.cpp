#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<list>
#include<stack>
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

int n, a, tab[5];
vector<int> V[5];

int main()
{
  scanf("%d", &n);
  REP(i, n)
  {
    scanf("%d", &a);
    tab[a]++;
    V[a].PB(i+1);

  }
  int res = 0;
  
  res = min(tab[1], min(tab[2], tab[3]));
  printf("%d\n", res);
  
  REP(i, res)
    printf("%d %d %d\n", V[1][i], V[2][i], V[3][i]);
    
  
  
  return 0;
}