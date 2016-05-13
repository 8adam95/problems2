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
bool vis[100006];

int main()
{
  bool ba = false, ab = false;
  
  cin >> a;

  int n = a.length();
  
  REP(i, n-1)
  {
    if(ba == false)
      if(a[i] == 'B' && a[i+1] == 'A' && !vis[i] && !vis[i+1])
	ba = true, vis[i] = true, vis[i+1] = true;
    if(ab == false)
      if(a[i] == 'A' && a[i+1] == 'B' && !vis[i] && !vis[i+1])
	ab = true, vis[i] = true, vis[i+1] = true;
  }
  
  if(ab && ba)
    return printf("YES\n"), 0;
  
  //cout << "oylo";
  
  REP(i, n)
    vis[i] = false;
    
  ab = false, ba = false;
  REP(i, n-1)
  {
    if(ab == false)
      if(a[i] == 'A' && a[i+1] == 'B' && !vis[i] && !vis[i+1])
	ab = true, vis[i] = true, vis[i+1] = true;
    if(ba == false)
      if(a[i] == 'B' && a[i+1] == 'A' && !vis[i] && !vis[i+1])
	ba = true, vis[i] = true, vis[i+1] = true;
  }
  
  if(ab && ba)
    return printf("YES\n"), 0;
  printf("NO\n");
  
  return 0;
}