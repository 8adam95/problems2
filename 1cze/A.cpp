#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;

#define REP(I, N) for(int I = 0; i < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

int naj, kupa;

string a;
string b;
string c;
string d;

int main()
{
  cin >> a;
  cin >> b;
  cin >> c;
  cin >> d;
  
  int a1 = a.size()-2;
  int b1 = b.size()-2;
  int c1 = c.size()-2;
  int d1 = d.size()-2;
  
  if(a1 >= 2*b1 && a1 >= 2*c1 && a1 >= 2*d1)
    naj++, kupa = 1;
  if(b1 >= 2*a1 && b1 >= 2*c1 && b1 >= 2*d1)
    naj++, kupa = 2;
  if(c1 >= 2*a1 && c1 >= 2*b1 && c1 >= 2*d1)
    naj++, kupa = 3;
  if(d1 >= 2*a1 && d1 >= 2*b1 && d1 >= 2*c1)
    naj++, kupa = 4;
  
  if(2*a1 <= b1 && 2*a1 <= c1 && 2*a1 <= d1)
    naj++, kupa = 1;
  if(2*b1 <= a1 && 2*b1 <= c1 && 2*b1 <= d1)
    naj++, kupa = 2;
  if(2*c1 <= a1 && 2*c1 <= b1 && 2*c1 <= d1)
    naj++, kupa = 3;
  if(2*d1 <= a1 && 2*d1 <= b1 && 2*d1 <= c1)
    naj++, kupa = 4;
  
  
  if(naj == 1)
  {
    if(kupa == 1)
      printf("A\n");
    if(kupa == 2)
      printf("B\n");
    if(kupa == 3)
      printf("C\n");
    if(kupa == 4)
      printf("D\n");
  }
  else
    printf("C\n");

  return 0;
}