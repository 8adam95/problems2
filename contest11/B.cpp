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

int n, k, tab[1000005], mini = 999999999, pocz;

int main()
{
  scanf("%d %d", &n, &k);
  for(int i = 1; i <= n; i++)
    scanf("%d", &tab[i]);
  for(int i = 1; i <= n; i++)
    tab[i]+= tab[i-1];
  for(int i = k; i <= n; i++)
    if(tab[i] - tab[i-k] < mini)
      mini = tab[i]-tab[i-k], pocz = i-k+1;
  printf("%d\n", pocz);
  return 0;
}