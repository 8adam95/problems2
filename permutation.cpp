#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;

int n, k;

int main()
{
  scanf("%d %d", &n, &k);
  for(int i = 0; i < n; i++)
  {
    if(k > 0)
      printf("%d %d ", 2*i+2, 2*i+1);
    else
      printf("%d %d ", 2*i+1, 2*i+2);
    k--;
  }

  printf("\n");

  return 0;
}