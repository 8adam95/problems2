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

ll a, b;

ll NWD(ll a, ll b)
{
    while(a!=b)
       if(a>b)
           a-=b;
       else
           b-=a;
    return a;
}

int main()
{
  cin >> a >> b;
  
  
  if(a == b-1)
  {
    cout << "-1" << "\n";
    return 0;
  }
  if(a == b-2 && a%2 == 0)
  {
    cout << a << " " << a+1 << " " <<  a+2 << "\n";
    return 0;
  }
  if(a == b-2 && a%2 == 1)
  {
    cout << "-1" << "\n";
    return 0;
  }
  else
  {
    if(a%2 == 0)
    {
      cout << a << " " << a+1 << " " << a+2;
      return 0;
    }
    else
    {
      cout << a+1 << " " << a+2 << " " << a+3;
      return 0;
    }
  }
  
  return 0;
}