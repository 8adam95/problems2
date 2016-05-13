#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

#define LL long long

LL a, b, ans;

void gcd(LL a, LL b)
{
  if(a == 0)
    return ;
  ans += b/a;
  gcd(b%a, a);
}

int main()
{
  cin >> a >> b;
  if(a > b)
    swap(a, b);
  gcd(a,b);
  cout << ans << "\n";
  
  return 0;
}