#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<set>
#include<map>
#include<queue>
#include<cmath>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define MP make_pair
#define PB push_back
#define LL long long
#define F first
#define S second

int n, tab[2*2002], sumka, tab1[2*2002], tab2[2*2002], res;
double a[2*2002], byl[2*2002];
int r;
int main()
{
  scanf("%d", &n);
  FOR(i, 1, 2*n)
  {
    cin >> a[i];
    tab[i] = a[i]*1000;
    tab[i] %= 1000;
    sumka += tab[i];
  }
  int mini;
  sort(tab+1, tab+2*n+1);
  for(int i = 2*n; i >= 1; i--)
    if(byl[i] == false)
    {
      byl[i] = true;
      int k = 1000-tab[i];
      mini = 1000;
      for(int j = i; j >= 1; j--)
      {
	
	if(byl[j] == false)
	{
	  if(tab[j] == k)
	  {
	    mini = 0;
	    byl[j] = true;
	    break;
	  }
	  else
	  {
	    if(tab[j] < mini)
	      mini = tab[j], r = j;
	  }
	}
      }
	if(mini != 0)
	{
	  byl[r] = true;
	  res += k - mini;
	}
    }
    printf("0.");
    int p = abs(sumka-res);
    if(p-1000 > 0)
    {
      if(p-1000 < 10)
	printf("0");
      if(p-1000 < 100)
	printf("00");
      printf("%d\n", p-1000);
    }
    else
      printf("000\n");
    
  return 0;
}