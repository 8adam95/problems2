#include<iostream>
using namespace std;

int a[1001][1001];

int main()
{
  int n, k;
  cin >> n >> k;
  for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
      if(i+j == n-1)
	a[i][j] = k-n+1;
      else
	a[i][j] = 1;
  for(int i = 0; i < n; i++)
{
  for(int j = 0; j < n; j++)
    cout << a[i][j] << " ";
    cout << "\n";
}  
  

  return 0;
}

