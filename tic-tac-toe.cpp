#include<cstdio>
#include<iostream>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) foR(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second

#define t(c) if(tmp[3*i] == c&&tmp[3*i+1] == c&&tmp[3*i+2] == c || tmp[i] == c&&tmp[i+3] == c&&tmp[i+6] == c || tmp[0] == c&&tmp[4] == c&&tmp[8] == c || tmp[2] == c&&tmp[4] == c&&tmp[6] == c)

char tmp[9];
int ile0, ileX, w0, wX;

int main()
{
  REP(i, 9)
  {
    cin >> tmp[i];
    if(tmp[i] == '0')
      ile0++;
    if(tmp[i] == 'X')
      ileX++;
  }
  REP(i, 3)
  {
    t('0')
      w0 = 1;
    t('X')
      wX = 1;
  }
  if((wX && ileX != ile0 + 1) || (w0 && ile0 != ileX) || (ileX != ile0+1 && ileX != ile0))
    return printf("illegal\n"), 0;
  else if(wX)
    return printf("the first player won\n"), 0;
  else if(w0)
    return printf("the second player won\n"), 0;
  else if(ileX + ile0 == 9)
    return printf("draw\n"), 0;
  else if(ileX == ile0)
    return printf("first\n"), 0;
  printf("second\n");


  return 0;
}