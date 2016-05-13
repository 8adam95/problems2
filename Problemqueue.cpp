#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<list>
#include<stack>
#include<string>
#include<cstring>
using namespace std;


#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

const int MAXN = 1000001;


int n, ans[MAXN], next2[MAXN], in[MAXN], out[MAXN];

int main()
{
  scanf("%d", &n);
  REP(i, n)
  {
    int a, b;
    scanf("%d %d", &a, &b);
    if(!a)
      ans[2] = b;
    next2[a] = b;
    in[b]++;
    out[a]++;
  }
  FOR(i, 1, MAXN)
    if(out[i] && !in[i])
      ans[1] = i;
  FOR(i, 1, n-2)
    ans[i+2] = next2[ans[i]];
  FOR(i, 1, n)
    printf("%d ", ans[i]);
  printf("\n");
  
  
  return 0;
}