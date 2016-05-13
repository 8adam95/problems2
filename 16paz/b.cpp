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


unsigned long long n, m;

int main()
{
  cin >> n >> m;
  
  if(n%m == 0)
  {
    unsigned long long ileWgrupie = n/m;
    ileWgrupie = (ileWgrupie*(ileWgrupie-1))/2;
    cout << (unsigned long long)m*ileWgrupie << " ";
    
    ileWgrupie = 0;

    n -= (m-1);
    
    
    ileWgrupie = (n*(n-1))/2;
    cout << ileWgrupie << "\n";
  }
  
  else
  {
    unsigned long long ileWgrupie = n/m;
    ileWgrupie = (ileWgrupie*(ileWgrupie-1))/2;
    
    unsigned long long res = (m-(n%m))*ileWgrupie; // srednio w kazdej 
    
    ileWgrupie = n/m;
    
    
    ileWgrupie = ((ileWgrupie+1)*(ileWgrupie))/2;
    
    
    ileWgrupie = (n%m)*ileWgrupie;
    cout << res + ileWgrupie << " ";  // po rowno
    
    // w kazdej 1, i w jednej reszta
    
    n -= (m-1);
    
    ileWgrupie = (n*(n-1))/2;
    cout << ileWgrupie << "\n";
    
    
  }
  
  
  
  return 0;
}