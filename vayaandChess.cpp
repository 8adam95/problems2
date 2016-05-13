#include<cstdio>
#include<iostream>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long 

int n;

int main()
{
  scanf("%d", &n);
  if(n%2 == 0)
    return printf("white\n1 2\n"), 0;
  printf("black\n");
  
  
  return 0;
}