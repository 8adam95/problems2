#include<cstdio>
#include<iostream>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<algorithm>

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

int a,b,a1,ans;

int main()
{
  while(scanf("%d %d", &a, &b))
  {
    a1 = 0;
    ans = 0;
    while (a>0)
    {
      ans+=a;
      a1+=a;
      a=0;
      a+=a1/b;
      a1%=b;
    }
    printf("%d\n",ans);
  }
  return 0;
}