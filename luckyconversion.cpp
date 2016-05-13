#include <cstdio>
#include <iostream>
#include <queue>
#include <set>
#include <algorithm>
#include <cstring>
#include <string>
#include <map>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back
#define FORE(i, x) (__typeof((x).begin()) i = (x).begin(); i != (x).end(); i++)

typedef pair<int, int> pii;
typedef vector<int> vi;

const int MAXN = 1e5 + 5;

char tmp[MAXN];
int ile7, ile4, dobrych;
string ciag1, ciag2;

int main()
{
  scanf("%s", tmp);
  ciag1 = tmp;
  scanf("%s", tmp);
  ciag2 = tmp;
  
  int d = ciag2.length();
  
  REP(i, d)
  {
   if(ciag1[i] != ciag2[i])
   {
     if(ciag1[i] == '7')
       ile7++;
     if(ciag1[i] == '4')
       ile4++;
   }
   else
     if(ciag1[i] == ciag2[i] && (ciag1[i] == '4' || ciag1[i] == '7'))
       dobrych++;
  }
  printf("%d\n", d-dobrych-min(ile4, ile7));
  

  return 0;
}