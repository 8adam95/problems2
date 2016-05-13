#include<cstdio>
#include<algorithm>
#include<iostream>
#include<vector>
#include<queue>
#include<set>
#include<map>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long 
#define F first
#define S second
#define MP make_pair
#define PB push_back

int n, k, a[105], ile[100], ile2[105], dod;

int main()
{
  scanf("%d %d", &n, &k);
  REP(i, n)
    scanf("%d", &a[i]);
  REP(i, n)
  {
    if(a[i] == 2)
      ile2[i%k]++;
    else
      ile[i%k]++;
  }
 
  REP(i, k)
    dod += min(ile2[i], ile[i]);
  printf("%d\n", dod);
  return 0;
}
