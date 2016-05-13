#include<cstdio>
#include<algorithm>
#include<iostream>
#include<vector>
#include<queue>
#include<set>
#include<cstring>
#include<string>
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

int f, m;

char tmp[1000005];
string ciag;

int main()
{
  scanf("%s", tmp);
  ciag = tmp;
  int d = ciag.length();
  
  REP(i, d)
  {
    if(ciag[i] == 'M')
      m++;
    else if(m > 0)
      f = max(f+1, m);
  }
  printf("%d\n", f);


  return 0;
}