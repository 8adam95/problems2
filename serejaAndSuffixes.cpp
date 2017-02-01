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

bool a[100006];

int tab[100006], res[100006];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    REP(i, n)
        scanf("%d", tab+i);
        
    FORD(i, n-1, 0)
    {
        res[i] = res[i+1];
        if(!a[tab[i]])
            res[i]++, a[tab[i]] = true;
    }
    
    while(m--)
    {
        int in;
        scanf("%d", &in);
        printf("%d\n", res[in-1]);
    }
    




    return 0;
}