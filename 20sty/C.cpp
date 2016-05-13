#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
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

int n, tab[200005];

long long cnt, cnt1, licz;

int main()
{
  scanf("%d", &n);
  FOR(i, 1, n)
    scanf("%d", &tab[i]);
  
  FOR(i, 1, n)
  {
    if(tab[i] == 1)
      licz++;
    else
      cnt += licz;
  } 
  
  licz = 0;
  
  FORD(i, n, 1)
  {
    if(tab[i] == 0)
      licz++;
    else
      cnt1 += licz;
  }
  
  cout << min(cnt, cnt1) << "\n";
  
  return 0;
}