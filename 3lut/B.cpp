#include<cstdio>
#include<iostream>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
#include<vector>
#include<cstring>
#include<string>
#include<list>
#include<stack>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

int dx[] = {1, -1, 0 ,0};
int dy[] = {0, 0, 1, -1};

int n;
char tmp[105];
string ciag[105];

bool vis[105][105] ,l;

bool Inside(int a, int b)
{
  return (a >= 0 && b >= 0 && a < n && b < n);
}

int main()
{
  scanf("%d", &n);
  REP(i, n)
  {
    scanf("%s", tmp);
    ciag[i] = tmp;
  }
  
  int cnt = 0;
  REP(i, n)
    REP(j, n)
      if(ciag[i][j] == '#')
	cnt++;
  if(cnt % 5 != 0)
    return printf("NO\n"), 0;
  
  
  REP(i, n)
    REP(j, n)
    {
      bool a = false;
      if(ciag[i][j] == '#' && !vis[i][j])
      {
	
	for(int k = 0; k < 4; k++)
	  if(!Inside(i+dx[k], j+dy[k]) || vis[i+dx[k]][j+dy[k]] || ciag[i+dx[k]][j+dy[k]] != '#')
	    a = true;
	  
	if(a == false && ciag[i][j] == '#')
	{
	  for(int k = 0; k < 4; k++)
	    vis[i+dx[k]][j+dy[k]] = true;
	  vis[i][j] = true;
	}
      }
    }
  REP(i, n)
    REP(j, n)
      if(ciag[i][j] == '#' && !vis[i][j])
      {
	l = true;
	break;
      }
      
   if(l == false)
     return printf("YES\n"), 0;
    
   printf("NO\n");
  return 0;
}