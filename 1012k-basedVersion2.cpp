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

unsigned long long int tab[1900], n, k;


int main()
{
    scanf("%llu %llu", &n, &k);
    
    tab[0] = 1;
    tab[1] = k-1;
    
    for(int i = 2; i <= n; i++)
        tab[i] = (k-1)*(tab[i-1] + tab[i-2]);
    
    
    printf("%llu\n", tab[n]);
    
    return 0;
}