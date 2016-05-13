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

int n, a[2005], suma1, suma2;


int main()
{
	scanf("%d", &n);
	FOR(i, 1, n)
	  scanf("%d", &a[i]);
	
	int l = 1; 
	int k = n;
	for(int i = 1; i <= n; i++)
	{
	  if(a[l] >= a[k])
	  {
	    if(i%2 == 1)
	      suma1+= a[l], l++;
	    else
	      suma2 += a[l], l++;
	  }
	  else 
	  {
	    if(i%2 == 1)
	      suma1 += a[k], k--;
	    else
	      suma2 += a[k], k--;
	  }
	}
	printf("%d %d\n", suma1, suma2);
	return 0;
}