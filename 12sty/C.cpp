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

const int MAXN = 1000005;

int n, m, co[MAXN], skad[MAXN], ile[MAXN], tab[MAXN], kupa[MAXN], czuo[MAXN];

int main()
{
  scanf("%d", &m);
  
  int l = 0;
  
  FOR(i, 1, m)
  {
    scanf("%d", &co[i]);
    if(co[i] == 1)
      scanf("%d", &czuo[i]), tab[i] = tab[i-1] + 1, kupa[l] = czuo[i], l++;
    else
    {
      scanf("%d %d", &skad[i], &ile[i]), tab[i] = tab[i-1] + skad[i]*ile[i];
      for(int j = 0; j < ile[i]; j++)
	for(int k = 0; k < skad[i]; k++)
	{
	  if(l > 1000000)
	    break;
	  kupa[l] = kupa[k], l++;
	}
    }
    
  }
  scanf("%d", &n);
  
  l = 1;
  
  int a;
  
  FOR(i, 1, n)
  {
    cin >> a;
    while(a < tab[l])
      l++;
    if(a >= tab[l])
    {
      if(co[l] == 1)
	printf("%d ", czuo[a]);
      else
      {
	if(
	printf("%d ", kupa[a]);
	
      }
	
    }
  }
  
  return 0;
}