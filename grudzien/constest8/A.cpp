#include<cstdio>
#include<algorithm>
#include<iostream>
#include<vector>
#include<queue>
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

char tmp[105];
string ciag;
int chleb, kielbach, sera, nb, nc, ns, ps, pb, pc;
long long ile, r;

int main()
{
  scanf("%s", tmp);
  ciag = tmp;
  int d = ciag.length();
  REP(i, d)
  {
    if(ciag[i] == 'B')
      chleb++;
    if(ciag[i] == 'S')
      kielbach++;
    if(ciag[i] == 'C')
      sera++;
  }
  scanf("%d %d %d", &nb, &ns, &nc);
  if(chleb > 0 && kielbach > 0 && sera > 0)
  {
    while(nb - chleb > 0 && ns - kielbach > 0 && nc - sera > 0)
      ile++, nb -= chleb, ns -= kielbach, nc -= sera;
  } 
  else if(chleb > 0 && kielbach > 0 && sera == 0)
  {
    while(nb - chleb > 0 && ns - kielbach > 0)
      ile++, nb -= chleb, ns -= kielbach;
  } 
  else if(chleb > 0 && kielbach == 0 && sera > 0)
  {
    while(nb - chleb > 0 && nc - sera > 0)
      ile++, nb -= chleb, nc -= sera;
  }
  else if(chleb == 0 && kielbach > 0 && sera > 0)
  {
    while(ns - kielbach > 0 && nc - sera > 0)
      ile++, ns -= kielbach, nc -= sera;
  } 
  else if(chleb > 0 && kielbach == 0 && sera == 0)
  {
    while(nb - chleb > 0)
      ile++, nb -= chleb;
  } 
  else if(chleb == 0 && kielbach > 0 && sera == 0)
  {
    while(ns - kielbach > 0)
      ile++, ns -= kielbach;
  } 
  else if(chleb == 0 && kielbach == 0 && sera > 0)
  {
    while(nc - sera > 0)
      ile++, nc -= sera;
  }
  
  scanf("%d %d %d", &pb, &ps, &pc);
  cin >> r;
  while(nb > 0 || nc > 0 || ns > 0)
  {
     if(chleb == 0)
      nb = 0;
    if(sera == 0)
      nc = 0;
    if(kielbach == 0)
      ns = 0;
    
    if(nb < chleb)
    {
      if((chleb-nb)* pb <= r)
	r -= (chleb-nb)*pb, nb = chleb;
      else
      {
	cout << ile << "\n";
	return 0;
      }
    }
    if(ns < kielbach)
    {
      if((kielbach-ns)*ps <= r)
	r -= (kielbach-ns)*ps, ns = kielbach;
      else
      {
	cout << ile << "\n";
	return 0;
      }
    }
    if(nc < sera)
    {
      if((sera-nc)*pc <= r)
	r -= (sera-nc)*pc, nc = sera;
      else
      {
	cout << ile << "\n";
	return 0;
      }
    }
    ile++;
    nb -= chleb, nc -= sera, ns -= kielbach;
    if(chleb == 0)
      nb = 0;
    if(sera == 0)
      nc = 0;
    if(kielbach == 0)
      ns = 0;
  }
  
  long long sumka = kielbach*ps + sera*pc + chleb*pb;
  long long kupa = (r/sumka);
  ile += kupa;
  cout << ile << "\n";
  return 0;
}