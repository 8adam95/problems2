#include<cstdio>
using namespace std;

int n, m, a;
bool is;

int main()
{
  scanf("%d %d", &n, &m);
  for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++)
    {
      scanf("%d", &a);
      if(a == 1)
      {
	if(i == 0 || j == 0)
	  is = true;
	if(i == (n-1) || j == (m-1))
	  is = true;
      }
    }
    is ? printf("2\n") : printf("4\n");
  return 0;
}