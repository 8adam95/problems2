#include<iostream>
#include<algorithm>
using namespace std;

int main()
{

long long int n, m, p, q;
int a[100001];
p = 0;
cin >> n >> m;
for(int i = 0; i < n; i++)
cin >> a[i];

sort(a, a+n);
for(int i = 0; i < n; i++)
{
  if(m != 1)
{
p+= m*a[i];
m--;
}
else if(m == 1)
p+=a[i];

}
cout << p << endl;
}