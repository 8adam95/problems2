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


int n, tab[60];

int main()
{
    scanf("%d", &n);
    
    tab[1] = 1;
    tab[2] = 1;
    tab[3] = 2;
    
    for(int i = 4; i <= n; i++)
        tab[i] = tab[i-1]+tab[i-3]+1;
    
    printf("%d\n", tab[n]);
    
    return 0;
}