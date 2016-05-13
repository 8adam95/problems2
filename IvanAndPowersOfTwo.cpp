#include<cstdio>
#include<iostream>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
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

int n, a;
set<int> S;


void add(int x)
{
  if(S.find(x) == S.end())
    S.insert(x);
  else
    S.erase(x), add(x+1);
}

int main()
{
  scanf("%d", &n);
  REP(i, n)
    scanf("%d", &a), add(a);
  set<int>::iterator it = S.end();
  it--;
  printf("%d\n", *it - (int)S.size() + 1);

  return 0;
}