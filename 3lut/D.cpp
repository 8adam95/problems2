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

const int MAXN = 123456;

vector<int> a;
int n, b[MAXN], x, y, foo;

int main()
{
  scanf("%d", &n);
  while(n--)
  {
    scanf("%d", &foo);
    REP(i, foo)
      scanf("%d", b+i);
      
    REP(i, foo/2)
    {
      x += b[i];
      y += b[foo-(foo/2)+i];
    } 
    if(foo % 2 == 1)
      a.PB(b[foo/2]);
  }
  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());
  for(int i = 0; i < (int)a.size(); i++)
  {
    if(i % 2 == 0)
      x += a[i];
    else
      y += a[i];
  }
  printf("%d %d\n", x, y);
  return 0;
}