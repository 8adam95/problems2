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

int n;
long long int tab[50];

int main()
{
    scanf("%d", &n);
    
    tab[1] = 2;
    tab[2] = 2;

    FOR(i, 3, n)
        tab[i] = tab[i-1]+tab[i-2];

    printf("%lld\n", tab[n]);


    return 0;
}