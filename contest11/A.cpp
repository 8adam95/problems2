#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<iostream>
#include<fstream>
#include<map>
#include<ctime>
#include<set>
#include<queue>
#include<cmath>
#include<vector>
#include<bitset>
#include<functional>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back
#define REP1(i,l,r) for((i) = (l); (i) <= (r); ++(i))
#define REP2(i,l,r) for((i) = (l); (i)!=(r); ++(i))

string a;
char b[200005];
int top;

int main()
{
  int i;
  cin >> a;
  REP2(i, 0,(int)a.size())
  {
    char  c = a[i];
    if(top >= 2 && b[top] == c && b[top-1] == c)
      ;
    else if(top >= 3 && b[top-1] == b[top-2] && b[top] == c)
      ;
    else
      b[++top] = c;
  }
  REP1(i, 1, top)
    cout << b[i];
  printf("\n");
  
  return 0;
}