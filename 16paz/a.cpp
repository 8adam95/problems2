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


int sum, a, b, c, d, e;

int main()
{
  scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
  sum = a+b+c+d+e;
  if(sum % 5 == 0 && sum != 0)
    printf("%d\n", sum/5);
  else
    printf("-1\n");
   
  return 0;
}