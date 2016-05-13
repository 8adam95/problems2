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

const int MAXN = 100005;

int n, a[MAXN], b[MAXN];
bool good[MAXN], good1[MAXN], good2[MAXN];

int main()
{
  scanf("%d", &n);
  FOR(i, 1, n)
    scanf("%d %d", &a[i], &b[i]);
  FOR(i, 1, n/2)
    good[i] = true;
  int l = 1;
  int r = 1;
  FOR(i, 1, n)
  {
    if(a[l] <= b[r])
      good1[l] = true, l++;
    else
      good2[r] = true, r++;
  }
  FOR(i, 1, n)
  {
    if(good[i] == true || good1[i] == true)
      printf("1");
    else
      printf("0");
  }
  printf("\n");
  FOR(i, 1, n)
  {
    if(good[i] == true || good2[i] == true)
      printf("1");
    else
      printf("0");
  }
  printf("\n");
    
  return 0;
}