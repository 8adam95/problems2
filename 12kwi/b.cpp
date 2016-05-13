#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<cstring>
#include<algorithm>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

int v1, v2, t, d, tab[10005], tab2[10005], res;

int main()
{
  scanf("%d %d", &v1, &v2);
  scanf("%d %d", &t, &d);
  
  tab[1] = v1;
  tab2[t] = v2;
  for(int i = 2; i <= t; i++)
    tab[i] = tab[i-1]+d;
  
  for(int i = t-1; i >= 1; i--)
    tab2[i] = tab2[i+1]+d;
  
  FOR(i, 1, t)
    res += min(tab[i], tab2[i]);
  
  printf("%d\n", res);
  
  return 0;
}