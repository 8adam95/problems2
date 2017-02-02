#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<queue>
#include<cstring>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back



class ShorterSuperSum
{
    
    int tab[20][20];
public:
    
    int calculate(int k, int n)
    {
        for(int i = 1; i <= n; i++)
            tab[0][i] = i;
        
        for(int i = 1; i <= k; i++)
            for(int j = 1; j <= n; j++)
                for(int k = 1; k <= j; k++)
                    tab[i][j] += tab[i-1][k];
        return tab[k][n];
    }
    
};