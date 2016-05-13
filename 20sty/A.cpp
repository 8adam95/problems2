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
const int MAXN = 1005;

int n, cnt;
char tab[MAXN][MAXN];

int main()
{
  scanf("%d", &n);
  FOR(i, 1, n)
    FOR(j, 1, n)
    {
      if(tab[i-1][j] != 'C' && tab[i][j-1] != 'C')
	tab[i][j] = 'C', cnt++;
      else
	tab[i][j] = '.';
    }
  printf("%d\n", cnt);
  FOR(i, 1, n)
  {
    FOR(j, 1,n)
      cout << tab[i][j];
    printf("\n");
  }
  return 0;
}