#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
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

int n;
char tab[105][105];
bool a;

int main()
{
  scanf("%d", &n);
  FOR(i, 1, n)
    FOR(j, 1, n)
    {
      cin >> tab[i][j];
    }
  
  a = true;
  
  FOR(i, 1, n)
    FOR(j, 1, n)
    {
      int ile = 0;
      if(i+1 <= n)
      {
	if(tab[i+1][j] == 'o')
	  ile++;
      }
      if(i-1 >= 1)
	if(tab[i-1][j] == 'o')
	  ile++;
      if(j+1 <= n)
	if(tab[i][j+1] == 'o')
	  ile++;
      if(j-1 >= 1)
	if(tab[i][j-1] == 'o')
	  ile++;
      if(ile%2 != 0)
	a = false;
    }
  if(a == false)
    printf("NO\n");
  else
    printf("YES\n");

  return 0;
}