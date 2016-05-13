#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<cstring>
#include<string>
#include<queue>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

int tab[12], res, tablica[12];


string n;

int main()
{
  
  tab[0] = 1;
  
  for(int i = 1; i <= 10; i++)
    tab[i] = tab[i-1]*2;
  
  
  
  
  cin >> n;
  
  int d = n.length();
  
  tablica[0] = 0;
  tablica[1] = 2;
  tablica[2] = 4;
  tablica[3] = 8;
  tablica[4] = 16;
  tablica[5] = 32;
  tablica[6] = 64;
  tablica[7] = 128;
  tablica[8] = 256;
  tablica[9] = 512;
  
  for(int i = 1; i < d; i++)
    res += tablica[i];
  
  
  for(int i = 0; i < d; i++)
  {
    if(n[i]-'0' == 7)
      res += tab[d-i-1];
  }
  printf("%d\n", res+1);
  
  /*
  
  if(n == 4)
    return printf("%d\n", 1), 0;
  if(n == 7)
    return printf("2\n"), 0;
  
  ile = 2;
  
  for(int i = 2; i; i++)
  { 
    int k = 1;
    for(int j = 1; j <= i; j++)
    {
      if(i % 2 == 0)
	tab[0][k] = tab[1][j]*10+4;
      else
	tab[1][k] = tab[0][j]*10+4;
      
      ile++;
      if(tab[0][k] == n || tab[1][k] == n)
	return printf("%d\n", ile), 0;
      if(i% 2 == 0)
	tab[0][k+1] = tab[1][j]*10+7;
      else
	tab[1][k+1] = tab[0][j]*10+7;
      ile++;
      if(tab[0][k+1] == n || tab[1][k+1] == n)
	return printf("%d\n", ile), 0;
      k+=2;
    }
  }
  */
  /*
  tab[1] = 4;
  tab[2] = 7;
  tab[3] = 44;
  tab[4] = 47;
  tab[5] = 74;
  tab[6] = 77;
  tab[7] = 444;
  tab[8] = 447;
  tab[9] = 474;
  tab[10] = 477;
  tab[11] = 744;
  tab[12] = 747;
  tab[13] = 774;
  tab[14] = 777;
  tab[15] = 4444;
  tab[16] = 4447;
  tab[17] = 4474;
  tab[18] = 4477;
  tab[19] = 4744;
  tab[20] = 4747;
  tab[21] = 4774;
  tab[22] = 4777;
  tab[23] = 7444;
  tab[24] = 7447;
  tab[25] = 7474;
  tab[26] = 7477;
  tab[27] = 7744;
  tab[28] = 7747;
  tab[29] = 7774;
  tab[30] = 7777;
  
  tab[31] = 44444;
  tab[32] = 44447;
  tab[33] = 44474;
  tab[34] = 44477;
  tab[35] = 44744;
  tab[36] = 44747;
  tab[37] = 44774;
  tab[38] = 44777;
  tab[39] = 47444;
  tab[40] = 47447;
  tab[41] = 47474;
  tab[42] = 47477;
  tab[43] = 47744;
  tab[44] = 47747;
  tab[45] = 47774;
  tab[46] = 47777;
  tab[47] = 74444;
  tab[48] = 74447;
  tab[49] = 74474;
  tab[50] = 74477;
  tab[51] = 74744;
  tab[52] = 74747;
  tab[53] = 74774;
  tab[54] = 74777;
  tab[55] = 77444;
  tab[56] = 77447;
  tab[57] = 77474;
  tab[58] = 77477;
  tab[59] = 77744;
  tab[60] = 77747;
  tab[61] = 77774;
  tab[62] = 77777;
  
  tab[63] = 444444;
  tab[64] = 444447;
  tab[65] = 444474;
  tab[66] = 444477;
  tab[67] = 444744;
  tab[68] = 444747;
  tab[69] = 444774;
  tab[70] = 444777;
  tab[71] = 447444;
  tab[71] = 447447;
  tab[72] = 447474;
  tab[72] = 447477;
  tab[37] = 44774;
  tab[37] = 447744;
  tab[38] = 447777;
  tab[39] = 47444;
  tab[40] = 47447;
  tab[41] = 47474;
  tab[42] = 47477;
  tab[43] = 47744;
  tab[44] = 47747;
  tab[45] = 47774;
  tab[46] = 47777;
  tab[47] = 74444;
  tab[48] = 74447;
  tab[49] = 74474;
  tab[50] = 74477;
  tab[51] = 74744;
  tab[52] = 74747;
  tab[53] = 74774;
  tab[54] = 74777;
  tab[55] = 77444;
  tab[56] = 77447;
  tab[57] = 77474;
  tab[58] = 77477;
  tab[59] = 77744;
  tab[60] = 77747;
  tab[61] = 77774;
  tab[62] = 77777;
  
  */
  return 0;
}
