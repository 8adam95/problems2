#include<cstdio>
#include<cstring>
#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
#include<cmath>
#include<list>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

int mini = 1000000000, sol;

int main()
{
  int x1, x2, x3, y1, y2, y3;
  
  scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
  
  int k = 1, sw;
  
  while(k <= 3)
    {
    if(y1+y2 == x1)
      if(x2 == x3)
	if(mini > x1*(y1+x2))
	    mini = x1*(y1+x2), sol = 1, sw = k;
	
    if(x1 == x3 + y2)
      if(y3 == x2)
	if(mini > x1*(y1+3))
	  mini = x1*(y1+y3), sol = 2, sw = k;
	
    if(y2 == y3 && y3 == x1)
      if(mini > x1*(y1+x2+x3))
	mini = x1*(y1+x2+x3), sol = 3, sw = k;
      
    if(x1 == x2+y3)
      if(y2 == x3)
	if(mini > x1*(y1+y2))
	  mini = x1*(y1+y2), sol = 4, sw = k;
      
    if(x1 == x2+x3)
      if(y2 == y3)
	if(mini > x1*(y1+y2))
	  mini = x1*(y1+y2), sol = 5, sw = k;
      
    if(x1 == x2)
      if(x2 == x3)
	if(mini > x1*(y1+y2+y3))
	  mini = x1*(y1+y2+y3), sol = 6, sw = k;
      k++;
    }
    printf("%d %d\n", sol, sw);
       
       
  
  return 0;
}