#include<cstdio>
#include<iostream>
#include<queue>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
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

int n, c, tab[105], maks;

int main()
{
  scanf("%d %d", &n, &c);
  FOR(i, 1, n)
    scanf("%d", &tab[i]);

  FOR(i, 1, n-1)
    maks = max(maks, tab[i]-tab[i+1]-c);
    
  printf("%d\n", maks);
  
  return 0;
}