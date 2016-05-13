#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

char tmp[100005], tmp1[100005];
int d, pos;
string ciag;

int main()
{
  scanf("%s", tmp);
  ciag = tmp;
  d = ciag.length();
  for(int i = 0; i < d; i++)
  {
    if(pos > 0 && tmp1[pos-1] == tmp[i])
      pos--;
    else
    {
      tmp1[pos] = tmp[i];
      pos++; 
    }
  }
  if(pos == 0)
    puts("YES");
  else
    puts("NO");
  return 0;
}