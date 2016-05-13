#include<cstdio>
#include<iostream>
#include<queue>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
#include<cstring>
#include<string>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

string ciag;
int d, cnt;
bool tab[5005][5005];


int main()
{
  cin >> ciag;

  d = ciag.length();
  
  REP(i, d)
    if(ciag[i] == 'b')
      if(ciag[i+1] == 'e')
	if(ciag[i+2] == 'a')
	  if(ciag[i+3] == 'r')
	  {
	    tab[i][i+3] = true;
	    FOR(j, 0, i)
	      tab[j][i+3] = true;
	    FOR(j, i+3, d-1)
	      tab[i][j] = true;
	  }
  bool zmien = true;
  while(zmien)
  {
    zmien = false;
    REP(i, d)
      FOR(j, i+1, d-1)
      {
	while(tab[i][j] == true && tab[i][j+1] == false && j+1 <= d-1)
	  tab[i][j+1] = true, zmien = true;
	while(tab[i][j] == true  && i-1 >= 0 &&  tab[i-1][j] == false)
	  tab[i-1][j] = true, zmien = true;
      }
  }
  REP(i, d)
    REP(j, d)
      if(tab[i][j])
	cnt++;
      
  printf("%d\n", cnt);
  
  return 0;
}
