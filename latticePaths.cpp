#include<cstdio>
#include<iostream>
#include<set>
#include<map>
#include<algorithm>
#include<vector>
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

long tab[22][22];

int main()
{
    FOR(i, 1, 20)
        tab[i][0] = tab[0][i] = 1;

    FOR(i, 1, 20)
        FOR(j, 1, 20)
            tab[i][j] = tab[i-1][j]+tab[i][j-1];

    printf("%lld\n", tab[20][20]);
        


    return 0;
}