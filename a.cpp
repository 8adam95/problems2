#include <iostream>
#include <cstdio>
using namespace std;

int n, piec, zero, a;

int main()
{
  scanf("%d", &n);
  for(int i = 0; i < n; i++)
  {
    scanf("%d", &a);
    if(a == 0)
      zero++;
    else
      piec++;
  }

  piec -= piec%9;

  if(zero==0)
  {
    return printf("-1\n"), 0;
  }
  if(piec == 0)
  {
    return printf("0"), 0;
  }
  for(int i = 0; i < piec; i++)
    printf("5");
  for(int i = 0; i < zero; i++)
    printf("0");
  printf("\n");
return 0;
}