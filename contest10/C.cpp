#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <memory.h>
#include <time.h>
#include <set>
#include <map>
#include <deque>
#include <queue>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <fstream>

using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

const int MAXN = 2000005;

int n, k;
long long kupa[MAXN], l[MAXN], r[MAXN], ans[MAXN], ans2[MAXN], answer[MAXN];

int main()
{
  scanf("%d %d", &n, &k);
  
  for(int i = 1; i <= k; i++)
    cin >> kupa[i] >> l[i] >> r[i] >> answer[i];
  for(int i = 1; i <= n; i++)
    ans[i] = round(1e18);
  for(int i = k; i >= 1; i--)
  {
    if(kupa[i] == 1)
      for(long long j = l[i]; j <= r[i]; j++)
	ans[j] = ans[j]-answer[i];
    else
      for(long long j = l[i]; j <= r[i]; j++)
	if(ans[j] > answer[i])
	  ans[j] = answer[i];
  }
  for(int i = 1; i <= n; i++)
    if(ans[i] > 1000000000)
      ans[i] = 1000000000;
  for(int i = 1; i <= n; i++)
    ans2[i] = ans[i];
  for(int i = 1; i <= k; i++)
  {
    if(kupa[i] == 1)
      for(long long j = l[i]; j <= r[i]; j++)
	ans2[j]+= answer[i];
    else
    {
      long long maks = - round(1e18);
      for(long long j = l[i]; j <= r[i]; j++)
	if(ans2[j] > maks)
	  maks = ans2[j];
      if(answer[i] != maks)
	return printf("NO\n"), 0;
    }
  }
  printf("YES\n");
  for(int i = 1; i <= n; i++)
    cout << ans[i] << " ";
  cout << "\n";
  return 0;
}