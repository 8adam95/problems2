#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<string>
#include<cstring>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

int n, m, a[100006], b[100006];
ll mini = 2000000000000;

int main()
{
  scanf("%d %d", &n, &m);
  for(int i = 0; i < n; i++)
    scanf("%d", &a[i]);
  sort(a, a+n);
  for(int i = 0; i < m; i++)
    scanf("%d", &b[i]);
  sort(b, b+m);
    
  int L = 1;
  int R = 1000000000;
  while(L < R)
  {
    ll res = 0;
    int Center = (L+R)/2;
    for(int i = 0; i < n; i++)
    {
      if(a[i] < Center)
	res += Center-a[i];
      else
	break;
    }
    for(int i = m-1; i >= 0; i--)
    {
      if(b[i] > Center)
	res += b[i]-Center;
      else
	break;
    }
    if(res < mini)
      mini = res, R = Center;
    else
      L = Center+1;
  }
  cout << mini << "\n";

  
  return 0;
}