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

const int MAXN = 100005;

int n, tab[MAXN], ile[MAXN], cnt;
vector<int> v;
bool vis[5005];

int main()
{
  scanf("%d", &n);
  REP(i, n)
    scanf("%d", &tab[i]);
  
  sort(tab, tab+n);
  REP(i, n)
    ile[tab[i]]++;
   
  REP(i, n)
  {
    if(ile[tab[n-1]] >= 2 && !vis[tab[n-1]])
      cnt++, ile[tab[n-1]] = 1, vis[tab[n-1]] = true;
    if(ile[tab[i]] >= 2 && !vis[tab[i]])
      cnt += 2, vis[tab[i]] = true;
    if(ile[tab[i]] == 1, !vis[tab[i]])
      cnt++, vis[tab[i]] = true;
  }
  
  printf("%d\n", cnt);
  
  REP(i, 5004)
    vis[i] = false;
  
  REP(i, n)
  {
    if(ile[tab[i]] >= 2 && !vis[tab[i]])
      printf("%d ", tab[i]), v.PB(tab[i]), vis[tab[i]] = true;
    if(ile[tab[i]] == 1 && !vis[tab[i]])
      printf("%d ", tab[i]), vis[tab[i]] = true;
  }  
  sort(v.begin(), v.end(), greater<int>());
  
  for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
    printf("%d ", *it);
  printf("\n");
  
  return 0;
}