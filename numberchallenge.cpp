#include<cstdio>
#include<algorithm>
#include<functional>
#include<iostream>
using namespace std;

int nwd(int a, int b)
{
  return !b ? a : nwd(b, a%b);
}

bool sqf(int x)
{
  for(int i = 2; i*i <= x; i++)
    if(x%(i*i) == 0)
      return false;
    return true;
}

int sgn(int x)
{
 int ans = 1;
  for(int i = 2; i*i <= x; i++)
    if(x%i == 0)
      ans = -ans, x /= i;
  if(x > 1)
    ans = -ans;
  return ans;  
}

int func(int x, int M)
{
  int ans = 0;
  for(int i = 1; i <= M; i++)
    if(nwd(x, i) == 1)
      ans += M/i;   
 return ans;
}


int a, b, c;
long long ans;

int main()
{
  scanf("%d %d %d", &a, &b, &c);
  for(int s = 1; s <= 2000; s++)
    if(sqf(s))
    {
      int coef = sgn(s);
      for(int x = 1; x <= a; x++)
	if(nwd(x, s) == 1)
	  ans += (long long)(a/x) * (long long)coef * (long long)func(x, b/s) * (long long)func(x,c/s);
    }
    cout << ans%(1 << 30) << "\n";
  return 0;
}