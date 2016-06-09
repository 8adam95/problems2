#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<algorithm>
#include<cmath>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

int tab[100005];
long long cube[100005];

int main()
{
    for(int i = 1; i <= 100000; i++)
        cube[i] = i*i*i;
    
    long long m;
    cin >> m;
    long long suma = 0;
    
    int cnt = 0;
    int howM = 0;
    
    for(int i = 1; i <= 100000; i++)
    {
        if(suma+cube[i] <= m)
        {
          suma += cube[i];  
          cnt++;
          howM++;
        }
        else
            break;
        if(cube[i] * (howM+1) < cube[i+1])
            i--;
        else
            howM = 1;
        printf("%d %lld\n", cnt, suma);
        
    }
    cout << cnt << " " << suma << "\n";
 
    return 0;
}