#include<cstdio>
#include<algorithm>
using namespace std;

int n, a[100005], ile[100005], tab[100005], cnt;
bool byl[100005];

int main()
{
  scanf("%d", &n);
  for(int i = 1; i <= n; i++)
  {
    scanf("%d", &a[i]);
    tab[a[i]] += i;
    ile[a[i]]++;
    if(byl[a[i]] == false)
      byl[a[i]] = true, cnt++;
  }
  printf("%d\n", cnt);
  for(int i = 1; i <= 100000; i++)
    if(tab[i] > 0)
      printf("%d %d\n", i, tab[i]/ile[i]);
     

  return 0;
}