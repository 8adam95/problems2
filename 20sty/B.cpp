#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

const int MAXN = 1005;

int n, m, k;

int main()
{
  scanf("%d %d %d", &n, &m, &k);
  
  printf("%d\n", m*(m-1)/2);
  
  FORD(i, m, 1)
    FOR(j, 1, i-1)
    {
      int a = j, b = j+1;
      if(k == 1)
	swap(a, b);
      printf("%d %d\n", a, b);
    }
  
  return 0;
}