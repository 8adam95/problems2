#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
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

int n, a[300005];

long long sum, tab[300005];

int main()
{
  scanf("%d", &n);
  REP(i, n)
    scanf("%d", &a[i]);
  
  sort(a, a+n, greater<int>());

  tab[0] = a[0];
  
  for(int i = 1; i < n; i++)
    tab[i] = tab[i-1] + a[i];
  
  for(int i = n-1; i >= 0; i--)
  {
    sum += tab[i];
    sum += a[i];
  }
  sum -= a[0];
  
  cout << sum << "\n";
  
  
  return 0;
}