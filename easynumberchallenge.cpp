#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

#define FOR(I, A, B) for(int I = (A); I <= (B); I++)

int a, b, c, ile[1000005];
long long suma;

const int MOD = 1073741824;


int main()
{
  scanf("%d %d %d", &a, &b, &c);
  int n = a*b*c;
  FOR(i, 1, n)
    for(int j = i; j <= n; j += i)
      ile[j]++;
  FOR(i, 1, a)
    FOR(j, 1, b)
      FOR(k, 1, c)
	suma = (suma + ile[i*j*k]) % MOD;
  cout << suma << "\n";
  return 0;
}