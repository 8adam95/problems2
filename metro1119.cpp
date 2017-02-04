#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<cstring>
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

const int MAXN = 1005;

int n, m, k;
double tab[MAXN][MAXN];
bool shorter[MAXN][MAXN];


int main()
{
    scanf("%d %d %d", &m, &n, &k);
    while(k--)
    {
        int u, v;
        scanf("%d %d", &v, &u);
        //u--, v--;
        shorter[u][v] = true;
    }
    
    FOR(i, 1, m)
        tab[0][i] = i*100.0;
    
    FOR(i, 1, n)
        tab[i][0] = i*100.0;
    
    FOR(i, 1, n)
        FOR(j, 1, m)
        {
            if(shorter[i][j])
                tab[i][j] = min(tab[i-1][j-1] + sqrt(20000), min(tab[i-1][j]+100.0, tab[i][j-1]+100.0));
            else
                tab[i][j] = min(tab[i-1][j]+100.0, tab[i][j-1]+100.0);
        }
        
        
    printf("%d\n", (int)(tab[n][m]+0.5));
    
    
    
    
    
    return 0;
}