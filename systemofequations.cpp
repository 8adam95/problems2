#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int n, m, res;

int main()
{
  scanf("%d %d", &n, &m);
  for(int i = 0; i <= 1000; i++)
    for(int j = 0; j <= 1000; j++)
      if(i*i+j == n && i+j*j == m)
	res++;
      
  printf("%d\n", res);

  return 0;
}