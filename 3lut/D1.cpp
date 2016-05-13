#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;

int n, a[2005], suma, tab[2005][2005];


int main()
{
  scanf("%d", &n);
  for(int i = 0; i < n; i++)
  {
    int b;
    scanf("%d", &b);
    for(int j = 0; j < b; j++)
      scanf("%d", &a[j]), suma += a[j];
  }
  
  for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
      tab[i][j] = -1;
  for(int i = 0; i < n; i++)
    tab[1][i] = a[i];
  
  for(int i = 2; i <= n; i++)
    for(int j =	 0; j < n; j++)
      tab[i][j] = max(a[j]-tab[i-1][j+1], a[j+i-1]-tab[i-1][j]);

    int c = tab[n][0];
  c = (c+ suma)/2;
  printf("%d %d\n", c, suma - c);

 return 0;
}