#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<iostream>
#include<cmath>
using namespace std;


#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long

const int MAXN = 100005;

char tmp[MAXN];
string ciag;
int n, tab[3][MAXN], m, l, r;


int main()
{
  scanf("%s", tmp);
  ciag = tmp;
  
  n = ciag.length();
  
  REP(i, n)
  {
    REP(j, 3)
      tab[j][i] = tab[j][i-1];
    tab[ciag[i]-'x'][i]++;
  }
  scanf("%d", &m);
  while(m--)
  {
    scanf("%d %d", &l, &r);
    l--, r--;
    int a = tab[0][r] - tab[0][l-1];
    int b = tab[1][r] - tab[1][l-1];
    int c = tab[2][r] - tab[2][l-1];
    if((abs(a-b) <= 1 && abs(b-c) <= 1 && abs(a-c) <= 1) || (r-l < 2))
      puts("YES");
    else
      puts("NO");
    
  }

  return 0;
}