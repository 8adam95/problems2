#include<cstdio>
using namespace std;

int n, k, a[370], c, present, l, last;

int main()
{
  scanf("%d %d", &n, &k);
  scanf("%d", &c);
  for(int i = 0; i < c; i++)
    scanf("%d", a+i);
  last = 0;
  if(c > 0 && a[0] == 0)
    present++;
  for(int i = 1; i <= n; i++)
  {
    while(a[l] < i && l <= n)
      l++;
    if(a[l] == i)
      present++, last = i;
    if(a[l] != i && i - last == k)
      present++, last = i; 
  }
  printf("%d\n", present);
  


  return 0;
}