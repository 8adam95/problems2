#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
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


char tmp[1000000], tmp1[1000000];
string ciag1, ciag2;
int d1, d2, ileL, ileP;
bool vis;
vector<char> lewy, prawy;

int main()
{
  scanf("%s", tmp);
  ciag1 = tmp;
  scanf("%s", tmp1);
  ciag2 = tmp1;
  
  d1 = ciag1.length();
  d2 = ciag2.length();
  int k;
  REP(i, d1)
  {
    if(!vis && ciag1[i] != '|')
      lewy.PB(ciag1[i]);
    else if(vis == true && ciag1[i] != '|')
      prawy.PB(ciag1[i]);
    
    if(ciag1[i] == '|')
    {
      k = i;
      vis = true;
    }
  }
  
  REP(i, d2)
  {
    if((int)lewy.size() <= (int)prawy.size())
      lewy.PB(ciag2[i]);
    else
      prawy.PB(ciag2[i]);
  }
  if((int)prawy.size() != (int)lewy.size())
  {
    printf("Impossible\n");
    return 0;
  }
  lewy.PB(ciag1[k]);
  
  REP(i, (int)lewy.size())
  {
    printf("%c", lewy[i]);
  }
  REP(i, (int)prawy.size())
    printf("%c", prawy[i]);
    
    printf("\n");
    
  return 0;
}