#include<cstdio>
#include<iostream>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long 

const int MAXN = 1000006;

long long tmp, n, tabA[MAXN], tabO[MAXN], sumA, sumB, l, p, last;

int main()
{
  cin >> n;
  while(n--)
  {
    cin >> tmp;
    if(tmp >= 0)
      tabA[l++] = tmp, sumA += tmp, last = 1;
    else
      tabO[p++] = -tmp, sumB += (-tmp), last = 2;
  }
  if(sumA > sumB)
    return printf("first\n"), 0;
  if(sumB > sumA)
    return printf("second\n"), 0;
  
  for(int i = 0; i < min(p,l); i++)
  {
    if(tabA[i] > tabO[i])
      return printf("first\n"), 0;
    if(tabO[i] > tabA[i])
      return printf("second\n"), 0;
  } 
  
  if(l > p)
    return printf("first\n"), 0;
  if(p > l)
    return printf("second\n"), 0;
  
  if(last == 1)
    return printf("first\n"), 0;
  else
    return printf("second\n"), 0;
  
  
  return 0;
}
