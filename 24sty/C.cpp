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

const int MAXN = 10000005;

int n, m, a, ile[MAXN], res[MAXN], w[MAXN];
bool isPrime[MAXN];

int main()
{
  scanf("%d", &n);
  REP(i, n)
    scanf("%d", &a), ile[a]++;
  
  for(int i = 2; i < MAXN; i++)
    isPrime[i] = true;
  
  for(int i = 2; i < MAXN; i++)
    if(isPrime[i] == true)
    {
      w[i] += ile[i];
      for(int j = i+i; j < MAXN; j += i)
	w[i] += ile[j], isPrime[j] = false;
    }
    
  FOR(i, 1, MAXN-1)
    res[i] = res[i-1] + w[i];
  
    
   scanf("%d", &m);
   
   while(m--)
   {
     int l, r;
     
     scanf("%d %d", &l, &r);
     if(l >= MAXN)
       printf("0\n");
     else
       printf("%d\n", res[min(r, MAXN-1)] - res[l-1]);
   }
  return 0;
}