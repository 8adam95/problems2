#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;

int n, k, p;
bool isNotPrime[1005];

int main()
{
  scanf("%d %d", &n, &k);
  for(int i = 2; i*i <= 1000; i++)
    for(int j = 2*i; j <= 1000; j+=i)
      isNotPrime[j] = true;

    
  for(int i = 2; i <= n; i++)
  {
   if(!isNotPrime[i]) 
   {
     int l = i-1;
    for(int j = 2; j <= i; j++)
    {
      if(!isNotPrime[j])
      {
	for(int k = j+1; k <= n; k++)
	  if(!isNotPrime[k])
	  {
	    if(k + j == l)
	      p++;
	    break;
	  }
      }
    }
   }
  }
  if(p >= k)
    puts("YES");
  else
    puts("NO");
  return 0;
}