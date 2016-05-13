#include<cstdio>
#include<iostream>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
#include<vector>
#include<cstring>
#include<string>
#include<list>
#include<stack>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

ll cnt1, cnt2, x, y, maks;

int main()
{
  cin >> cnt2 >> cnt1 >> y >> x;
  
  while(cnt2 > 0)
  {
    maks += min(y, cnt2);
    cnt2 -= (y-1);
  }
  
  ll a = maks/x; 	// ile jest x-ow podzielnych 
  ll b = maks/y;
  ll c = maks/(x*y);
  
  cnt1 -= a;
  cnt1 += c;
  
  a = maks/x;
  b = a*x;
  b = max(x, b);
  
  if(cnt1 < (b-a-1))
  {
    maks += max(cnt1, 0LL);
    cout << maks << "\n";
    return 0;
  }
  else
  {
    cnt1 -= (b-a-1);
    maks = b;
  }
  
  
  while(cnt1 > 0)
  {
    maks += min(x, cnt1);
    cnt1 -= (x-1);
  }
  
  cout << maks << "\n";
  
 
  return 0;
}