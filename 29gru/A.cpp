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

int a, b, pier, dru, remis;


int main()
{
  scanf("%d %d", &a, &b);
  for(int i = 1; i <= 6; i++)
  {
    if(abs(a-i) == abs(b-i))
      remis++;
    if(abs(a-i) > abs(b-i))
      dru++;
    if(abs(a-i) < abs(b-i))
      pier++;
  }
  printf("%d %d %d\n", pier, remis, dru);
  
  return 0;
}