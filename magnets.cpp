#include<cstdio>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<iostream>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define LL long long
#define F first
#define S second

int n, cnt;
char tmp[1000000][3];

int main()
{
  scanf("%d", &n);
  for(int i = 1; i <= n; i++)
  {
    scanf("%s", tmp[i]);
    if(tmp[i][0] != tmp[i-1][0])
      cnt++;
  }
  
  printf("%d\n", cnt);
  return 0;
}