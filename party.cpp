#include<cstdio>
#include<iostream>
#include<queue>
#include<set>
#include<map>
#include<vector>
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

const int MAXN = 2005;

int n, ojciec[MAXN], res;


int main()
{
  scanf("%d", &n);
  FOR(i, 1, n)
    scanf("%d", &ojciec[i]);
    
  FOR(i, 1, n)
  {
    int obecny = 0;
    int p = i;
    while(p != -1)
    {
      obecny++;
      p = ojciec[p];
    }
    res = max(res, obecny);
  }
  
  printf("%d\n", res);
  
  return 0;
}