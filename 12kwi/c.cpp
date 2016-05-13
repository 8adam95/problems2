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

const int MAXN = 200006;

int n, a, d[MAXN], sum, mini, maks;

int main()
{
  scanf("%d %d", &n, &a);
  REP(i, n)
    scanf("%d", &d[i]), sum += d[i];
  
  REP(i, n)
  {
    mini = min(d[i], max(1, a-sum+d[i]));
    maks = max(1, min(d[i], a-n+1));
    if(mini > maks)
      printf("0 ");
    else
      printf("%d ", max(0, d[i]-maks+mini-1));
  }
    
  printf("\n");
  
  return 0;
}