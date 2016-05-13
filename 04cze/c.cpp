#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<cstring>
#include<string>
#include<queue>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

string a;
bool tab[1005];

int main()
{
  cin >> a;
  
  int n = a.length();
  int p = 0;
  tab[p] = true;
  while(p <= 999)
    p += 8, tab[p] = true;
  
  
  int q = (int)a[0]-'0';
    if(q == 0)
      return printf("YES\n0\n"), 0;
    if(q == 8)
      return printf("YES\n8\n"), 0;
  
  if(n == 2)
  {
   int q = (int)a[1]-'0';
    if(q == 0)
      return printf("YES\n0\n"), 0;
    if(q == 8)
      return printf("YES\n8\n"), 0; 
    
  }
    
  FOR(i, 1, n-2)
  {
    int l = (int)a[i]-'0';
    if(l == 0)
      return printf("YES\n0\n"), 0;
    if(l == 8)
      return printf("YES\n8\n"), 0;
    FOR(j, 0, i-1)
    {
      int pi = (int)a[j]-'0';
      FOR(k, i+1, n-1)
      {
	int trz = (int)a[k]-'0';
	if(tab[100*pi+10*l+trz])
	  return printf("YES\n%d\n", 100*pi+10*l+trz), 0;
      }
    }
  }
  printf("NO\n");
  

  return 0;
}