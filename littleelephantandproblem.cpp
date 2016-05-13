#include <cstdio>
#include <queue>
#include <algorithm>
#include <list>
#include <set>
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

const int MAXN = 100005;

int n, a[MAXN], b[MAXN],ile;

int main()
{
  scanf("%d", &n);
  REP(i, n)
  {
    scanf("%d", a+i);
    b[i] = a[i];
  }
  sort(b, b+n);
  REP(i, n)
    if(a[i] != b[i])
      ile++;
  puts(ile > 2? "NO" : "YES");
  
  return 0;
}