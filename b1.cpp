#include<cstdio>
#include<algorithm>
#include<vector>
#include<set>
#include<queue>
#include<iostream>

const int MAXN = 100005;
using namespace std;


int n, a, cnt, b, c;
vector<int> tab[MAXN];
vector<pair<int, int> > ans;
bool byl[MAXN], ok;

#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define REP(I, N) for(int I = 0; I < (N); I++)
#define LL long long
#define PB push_back
#define MP make_pair
int main()
{
  scanf("%d", &n);
  FOR(i, 1, n)
  {
    scanf("%d", &a);
    tab[a].PB(i);
    if(byl[a] == false)
      byl[a] = true, cnt++;
  }

  FOR(i, 1, MAXN-1)
  {
    ok = true;
    if(tab[i].size() == 0)
      continue;
    if(tab[i].size()==1)
    {
      ans.push_back(make_pair(i, 0));
      continue;
    }
    FOR(j, 2, tab[i].size()-1)
      if(tab[i][j]-tab[i][j-1] != tab[i][1]-tab[i][0])
	ok = false;
    if(ok == true)
      ans.push_back(make_pair(i,tab[i][1]-tab[i][0]));
  }
  
  printf("%d\n", (int)ans.size());
  
  for(vector<pair<int, int> >::iterator it=ans.begin(); it!=ans.end(); it++)
    printf("%d %d\n", it->first, it->second);

return 0;
}