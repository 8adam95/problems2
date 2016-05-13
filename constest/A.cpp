#include<iostream>
#include<vector>
#include<set>
#include<cstdio>
#include<queue>
#include<map>
using namespace std;


#define ll long long
#define MP make_pair
#define PB push_back
#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define F first
#define S second

int n, tab[105], tabl[105], cnt, L, R, L1, R1;
bool vis[105], a;

int main()
{
  scanf("%d", &n);
  REP(i, n)
  {
    scanf("%d %d", &tab[i], &tabl[i]);
    L += tab[i], R += tabl[i];
    if(tab[i] % 2 == 1)
      L1++;
    if(tabl[i] % 2 == 1)
      R1++;
  }
  if((L % 2 == 0) && (R% 2 == 0))
    return printf("0\n"), 0;
  FOR(i, 0, min(L1, R1))
  {
    if(((L1-i) % 2 == 0) && ((R1+i) % 2 == 0))
      return printf("%d\n", i), 0;
    if(((L1+i) % 2 == 0) && ((R1-i) % 2 == 0))
      return printf("%d\n", i), 0;
  }
    printf("-1\n");
    
  return 0;
}