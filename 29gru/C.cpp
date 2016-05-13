#include<cstdio>
#include<iostream>
#include<vector>
#include<queue>
#include<set>
#include<cstring>
#include<string>
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

const int dx[4] = {0, 1, 0, -1};
const int dy[4] = {1, 0, -1, 0};

const int MAXN = 505;

int n, m, k, x[MAXN*MAXN+1], y[MAXN*MAXN+1];
char tmp[MAXN][MAXN];
bool visited[MAXN][MAXN], ok;

int main()
{
  scanf("%d %d %d", &n, &m, &k);
  REP(i, n)
    scanf("%s", tmp[i]);
  REP(i, n)
    REP(j, m)
      if(!ok && tmp[i][j] == '.')
      {
	int b = 1, c = 1;
	x[1] = i;
	y[1] = j;
	visited[i][j] = true;
	
	while(b <= c)
	{
	  REP(q, 4)
	  {
	    int xk = x[b] + dx[q];
	    int yk = y[b] + dy[q];
	    if(xk >= 0 && yk >= 0 && xk < n && yk < m)
	      if(tmp[xk][yk] == '.' && !visited[xk][yk])
	      {
		c++;
		x[c] = xk;
		y[c] = yk;
		visited[xk][yk] = true;
	      }
	  }
	  b++;
	}
	FOR(id, c-k+1, c)
	  tmp[x[id]][y[id]] = 'X';
	ok = true;
      }
  REP(i, n)
    printf("%s\n", tmp[i]);
  return 0;
}