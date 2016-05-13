#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<string>
#include<cstring>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

int n, d, tab[105], suma;

int main()
{
  scanf("%d %d", &n, &d);
  REP(i, n)
    scanf("%d", tab+i), suma+=tab[i];

  suma += (n-1)*10;
  
  if(suma <= d)
  {
    int ile = (n-1)*2;
    d -= suma;
    while(d >= 5)
      ile++, d-=5;
    printf("%d\n", ile);
  }
  else
    printf("-1\n");
  
  return 0;
}