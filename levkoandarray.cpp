#include<cstdio>
#include<algorithm>
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I++)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

const int MAXN = 2005;

int n, k, tab[MAXN], dp[MAXN];

bool dziala(ll x)
{
  REP(i, n)
    dp[i] = i;
  for(int i = 1; i < n; i++)
    for(int j = 0; j < i; j++)
      if(abs(tab[i]-tab[j]) <= x*(i-j))
	dp[i] = min(dp[i], dp[j]+i-j-1);
  for(int i = 0; i < n; i++)
    if(dp[i] + (n-i-1) <= k)
      return true;
  return false;
}

int main()
{
  scanf("%d %d", &n, &k);
  REP(i, n)
    scanf("%d", tab+i);
  
  ll l = 0, r = 1e10;
  
  while(l < r)
  {
    ll mid = (l+r)/2;
    if(dziala(mid))
      r = mid;
    else
      l = mid+1;
  }
  cout << l << "\n";

  return 0;
}