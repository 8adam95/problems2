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

int tab[4], a, b, c, suma, x, y, z;

int main()
{
  scanf("%d %d %d", &a, &b, &c);
  y = (b+a-c)/2;
  x = a-y;
  z = c-x;
  if(2*(x+y+z) != (a+b+c) || x < 0 || y < 0 || z < 0)
    return printf("Impossible\n"), 0;
  printf("%d %d %d\n", y, z, x);
  
  return 0;
}