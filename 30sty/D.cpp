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

char tmp[7], tmp1[7];
string ciag, ciag1;

int pobudka, jakDlugo;

int main()
{
  scanf("%s", tmp);
  scanf("%s", tmp1);
  
  pobudka += (tmp[0]-'0')*10*60;
  pobudka += (tmp[1] - '0')*60;
  
  pobudka += (tmp[3]-'0')*10;
  pobudka += (tmp[4]-'0');
  
  jakDlugo += (tmp1[0] -'0')*10*60;
  jakDlugo += (tmp1[1] - '0') * 60;
  jakDlugo += (tmp1[3] - '0')*10;
  jakDlugo += (tmp1[4] - '0');
  
  if(pobudka >= jakDlugo)
  {
    pobudka -= jakDlugo;
    printf("%d%d:%d%d\n", pobudka/600, pobudka/60, pobudka/10, pobudka%10);
  }
  else
  {
    jakDlugo -= pobudka;
    printf("%d%d:%d%d\n", 2-((jakDlugo)/600)%10, 4-(jakDlugo/60)%10, 6-(jakDlugo/10)%10, 9-jakDlugo%10);
  }
//   printf("%d %d\n", pobudka, jakDlugo);
  
  return 0;
}