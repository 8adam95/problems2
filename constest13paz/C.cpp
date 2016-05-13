#include<cstdio>
#include<algorithm>
#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<set>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define S second
#define F first
#define MP make_pair
#define PB push_back

const int MAXN = 100005;

int n, l, r, Ql, Qr, w[MAXN], res = 100000000;
int doTegoMomentuLewy[MAXN], doTegoMomentuPrawy[MAXN];

int main()
{
  scanf("%d %d %d %d %d", &n, &l, &r, &Ql, &Qr);
  FOR(i, 1, n)
    scanf("%d", &w[i]);
  FOR(i, 1, n)
     doTegoMomentuLewy[i] = doTegoMomentuLewy[i-1] + w[i]*l;
  FORD(i, n, 1)
    doTegoMomentuPrawy[i] = doTegoMomentuPrawy[i+1] + w[i]*r;
    
  
  FOR(i, 1, n)
  {
    if(i < (int)0.5*n)
      res = min(res, doTegoMomentuLewy[i]+doTegoMomentuPrawy[i+1]+max(0,(n-i-1))*Qr);
    if(i > (int)0.5*n)
      res = min(res, doTegoMomentuLewy[i]+doTegoMomentuPrawy[i+1]+max(0,(i+2))*Ql); 
    
  }
  printf("%d\n", res);
  return 0;
  
}