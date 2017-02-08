#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
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

long long tab[505][505];

long long solve(int n, int m)
{
    if(n == 0)
        return 1;
    if(m == 0)
        return 0;
    
    long long &res = tab[n][m];
    
    if(res == -1)
    {
        if(n >= m)
            res = solve(n-m, m-1) + solve(n, m-1);
        else
            res = solve(n, m-1);
    }
        
    return res;
    
}

int main()
{
    int n;
    scanf("%d", &n);
    
    REP(i, 502)
        REP(j, 502)
            tab[i][j] = -1;
    
    printf("%lld\n", solve(n, n-1));
    
    
    return 0;
}