#include<iostream>
#include<algorithm>
using namespace std;

unsigned long long a[100005];
int n, x;
unsigned long long sum = 0;

int main()
{

cin >> n >> x;
for(int i = 0; i < n; i++)
cin >> a[i];

sort(a, a+n);
for(int i = 0; i < n; i++)
{
  sum += a[i]*x;
  if( x > 1) x--;
}

cout << sum <<endl;

}