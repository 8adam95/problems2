#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;

#define REP(I, N) for(int I = 0; i < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

int sum, limit, pow[22], tab[22], suma, tablica[100005];
pair<int, int> wyn[100005];
vector<int> v;

void wyczysc()
{
  for(int i = 0; i <= 22; i++)
    tab[i] = 0; 
}

void zapiszBinarnie(int a)
{
  for(int i = 20; i >= 0; i--)
    if(a >= pow[i])
      a -= pow[i], tab[i] = 1;
  
}

int obliczLowBit()
{
  int res = 0;
  
  for(int i = 0; i <= 20; i++)
    if(tab[i] == 1)
      return pow[i];
}

int main()
{
  scanf("%d %d", &sum, &limit);
  
  pow[0] = 1;
  
  for(int i = 1; i <= 20; i++)
    pow[i] = pow[i-1]*2;
  
  for(int i = limit; i >= 1; i--)
  {
    wyczysc();
    zapiszBinarnie(i);
    wyn[i].F = obliczLowBit();
    wyn[i].S = i;
  }
  
  sort(wyn+1, wyn+limit+1);
  
  int l = 1;
  
  for(int i = limit; i >= 1; i--)
    if(wyn[i].F <= sum)
      sum -= wyn[i].F, tablica[l] = wyn[i].S, l++;
    l--;
    
  if(sum == 0)
  {
    printf("%d\n", l);
    for(int i = 1; i <= l; i++)
      printf("%d ", tablica[i]);
    printf("\n");
  }
  else
    printf("-1\n");


  return 0;
}