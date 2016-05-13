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

int k;
string a;

int main()
{
  cin >> a;
  scanf("%d", &k);
  
  if(a.size() % k == 0)
  {
      int ile = a.size()/k;
      for(int p = 0; p < k; p++)
	for(int j = 0; j < ile; j++)
	  if((int)a[p*ile+j] != (int)a[(p+1)*ile-j-1]) 
	    return printf("NO\n"), 0;
	  
      return printf("YES\n"), 0;
  }
  
  return printf("NO\n"), 0;
  
  
  return 0;
}