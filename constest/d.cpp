#include<iostream>
#include<vector>
#include<set>
#include<cstdio>
#include<queue>
#include<map>
using namespace std;


#define ll long long
#define MP make_pair
#define PB push_back
#define REP(I, N) for(int I = 0; I < (N); I++)

char tmp[1000005];
string ciag;

int a, ostatnia, p, pocz;
bool byla, vis, rob, bylo;

int main()
{
  scanf("%s", tmp);
  ciag = tmp;
  int d = ciag.length();
  
  for(int i = d-1; i >= 0; i--)
      if(ciag[i] == 'F')
      {
	p = i;
	break;
      }
  
  for(int i = p; i >= 0; i--)
    if(ciag[i] == 'M')
      rob = true;
    
  if(rob == true)
    for(int i = 0; i < d; i++)
    {  
      if(bylo == false)
      {
	if(ciag[i] == 'M')
	  bylo = true, pocz = i;
	else
	  continue;
      }
      if(bylo == true)
      {
	if(byla == true)
	  if(ciag[i] == 'F')
	  {
	    if(ostatnia+1 == i)
	      a++, ostatnia = i;
	    else
	    {
		a += (i-ostatnia-1);
		ostatnia = i;
	    }
	  }
	if(byla == false)
	  if(ciag[i] == 'F')
	  {
	    byla = true;
	    a = i;
	    ostatnia = i;
	  }
      }
    }
  printf("%d\n", a-pocz);
  
  return 0;
}