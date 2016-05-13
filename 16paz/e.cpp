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

ll n, k, ile;

int main()
{
  cin >> n >> k;
  for(int i = 1; i <= 100000000; i++)
  {
    ll p = n*i;
    ll l = 1;
    ll kupa = 0;
    bool ok = true;
    kupa += p%10;
    
    while(true)
    {
      int a = p%10; //ostatnia
      
      int b = (p/10)%10; //srodowa
      
      kupa += b*l; // dodaje srodkowa
      
      int c = (p/100)%10;
      
      
      
      if((b > a && b > c) || (b < a && b < c))
	ok = true;
      else
	ok = false;
      
      if(!ok)
	break;
      
      l *= 10;
      if(kupa + c*l == p) // jezeli srodkowa
	break;
      
      
      p/=10;
      
    
    }
    if(ok)
      ile++;
    if(ile == k)
    {
      cout << p << "\n";
      return 0;
    }
    
  }
  printf("-1\n");
  
  return 0;
}