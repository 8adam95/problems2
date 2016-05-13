#include <iostream>
#include <cstdio>
#include <algorithm>
#define M 100004
using namespace std;

long double a;
int n, w, t[100004];

int main()
{
  scanf("%d", &n);

  for (int i=1; i<=2*n; i++)
  {
    scanf("%Lf", &a);

    t[i] = (int)(a*1000.0)%1000;
   // cout << t[i] << endl;
  }

  sort(t+1, t+1+2*n);
  
  for (int i=1; i<=n; i++)
    if (w>=0)
      w-=(t[2*n-i+1]-t[i]);
    else w+=(t[2*n-i+1]-t[i]);
  
  if (w<0) w*=-1;  
    
  printf("0.%d", w);
  
  if (w<10) printf("0");
  if (w<100) printf("0");
  
return 0;
}