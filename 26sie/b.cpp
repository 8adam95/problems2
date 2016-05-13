#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

long long n, k, tab[200];
char a[100005], cur;
long long sum;

int main()
{
  cin >> n >> k;
  
  for(int i = 0; i < 40; i++)
    tab[i] = 0;
  
  for(int i = 0; i < n; i++)
    cin >> a[i], tab[a[i]-'A']++;
  
  sort(tab, tab+40, greater<int>());
  
  for(int i = 0; i < 30; i++)
  {
    if(tab[i] >= k)
      sum += (k*k), k -= tab[i];
    else
      k -= tab[i], sum += (tab[i]*tab[i]);
    if(k <= 0)
      break;
  }
    
  
  cout << sum << "\n";
  
  return 0;
}