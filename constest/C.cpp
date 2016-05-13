#include<iostream>
#include<vector>
#include<set>
#include<cstdio>
#include<queue>
#include<map>
using namespace std;


#define ll long long
#define MP make_pair
#define PB push_back
#define REP(I, N) for(int I = 0; I < (N); I++)

int n, tab[2*105], res[250], l, r, rozL, rozR, result, ile[250];
bool vis[205];
int main()
{
  scanf("%d", &n);
  for(int i = 1; i <= 2*n; i++)
  {
    scanf("%d", &tab[i]);
    ile[tab[i]]++;
    res[i] = 1;
  }
  l = 2*n;
  
  for(int i = 1; i <= 2*n; i++)
    if(vis[i] == false)
      if(ile[tab[i]] > 1)
      {
	int a = ile[tab[i]]/2;
	for(int j = 1; j <= 2*n; j++)
	  if(tab[i] == tab[j] && vis[j] == false && a > 0)
	  {
	    a--;
	    vis[j] = true;
	    res[i] = 2;
	    r++, l--;
	  }
      }
  if(l < r)
  {
    for(int i = 1; i <= 2*n; i++)
    {
      if(res[i] == 2)
      {
	l++, r--;
	res[i] = 1;
      }
      if(l == r)
	break;
    }
  }
  if(l > r)
    for(int i = 1; i <= 2*n; i++)
    {
     if(res[i] == 1)
     {
      l--, r++;
      res[i] = 2;
     }
     if(l == r)
       break;
    }
  for(int i = 1; i <= 2*n; i++)
  {
   if(res[i] == 1)
     if(vis[res[i]] == false)
     {
	vis[res[i]] = true;
	rozL++;
     }
     if(res[i] == 2)
       if(vis[res[i]] == false)
       {
	vis[res[i]] = true;
	rozR++;
       }
  }
  printf("%d\n", rozL*rozR);
  for(int i = 1; i <= 2*n; i++)
    printf("%d ", res[i]);
  printf("\n");

  return 0;
}