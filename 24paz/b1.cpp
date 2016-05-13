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
  cin >> cnt1 >> cnt2 >> x >> y;
  
  for(int i = 0; i <= 100000000; i++)
  {
    if(cnt1 + cnt2 >= x*y)
      ile++,
    else
    {
      cout << cnt1+cnt2 << "\n";
      break;
    }
  }
      
  
 
  return 0;
}