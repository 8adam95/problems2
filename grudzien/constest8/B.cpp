#include<cstdio>
#include<algorithm>
#include<iostream>
#include<vector>
#include<queue>
#include<cmath>
#include<set>
#include<map>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long 
#define F first
#define S second
#define MP make_pair
#define PB push_back

int a, b, deg, deg1, res;

int main()
{
  scanf("%d %d", &a, &b);
  deg = deg1 = 0;
  while(a % 2 == 0)
    deg++, a /= 2;
  while(b % 2 == 0)
    deg1++, b /= 2;
  res += abs(deg1 - deg);
  
  
  deg = deg1 = 0;
  while(a % 3 == 0)
    deg++, a /= 3;
  while(b % 3 == 0)
    deg1++, b /= 3;
  res += abs(deg1 - deg);
  
  deg = deg1 = 0;
  while(a % 5 == 0)
    deg++, a /= 5;
  while(b % 5 == 0)
    deg1++, b /= 5;
  res += abs(deg1 - deg);
  
  if(a-b)
    return printf("-1\n"), 0;
  return printf("%d\n", res), 0;
  return 0;
}