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

long long n, x, tab[100005];
ll res;


int main()
{
  cin >> n >> x;
  for(int i = 0; i < n; i++)
    cin >> tab[i];
  sort(tab, tab+n);
  
  for(int i = 0; i < n; i++)
  {
    res += (ll)(x*tab[i]);
    x--;
    if(x == 0)
      x = 1;
  }
  
  cout << res << "\n";
  
  return 0;
}