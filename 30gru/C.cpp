#include<cstdio>
#include<iostream>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

const int MAXN = 300006;

int n, a[MAXN];
pair<int, int> B[MAXN];

struct myclass
{
 bool operator() (pair<int, int> A, pair<int, int> B)
 {
    return A.S < B.S;
 }
};

int main()
{
  scanf("%d", &n);
  REP(i, n)
  {
    scanf("%d", &a[i]);
    B[i] = MP(a[i], i);
  }
  sort(B, B+n);
  FOR(i, 1, n-1)
    if(B[i].F <= B[i-1].F)
      B[i].F = B[i-1].F+1;
  sort(B, B+n, myclass());
  REP(i, n)
    printf("%d ", B[i].F);
  printf("\n");
  return 0;
}