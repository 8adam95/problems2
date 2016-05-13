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

int n, cnt = 0;
string a, b;


int main()
{
  scanf("%d", &n);
  cin >> a;
  cin >> b;
  
  REP(i, n)
  {
    if(a[i] != b[i])
    {
      int je = (int)a[i] - '0';
      int dw = (int)b[i] - '0';
      
      int res1 = dw-je;
      
      if(res1 < 0)
	res1 = 40;
      int res4 = je-dw;
      if(res4 < 0)
	res4 = 40;
      int res2 = je+10-dw;
      if(res2 < 0)
	res2 = 40;
      int res3 = 10-je+dw;
      if(res3 < 0)
	res3 = 40;
      
      cnt += max(0, min(max(0,res1), min(max(0,res2), min(max(0,res3), max(0,res4)))));
    }
  }
    
  printf("%d\n", cnt);

  return 0;
}