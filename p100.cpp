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

int tab[9000006];


int calc(int u)
{  
    int i = 1;
    while(u != 1)
    {
        if(u%2 == 0)
            u /= 2;
        else
            u = 3*u+1;
        i++;
    }
    return i;
}

int main()
{
    while(true)
    {
        int maks = -1, a, b;
        scanf("%d %d", &a, &b);
        FOR(i, a, b)
            maks = max(maks, calc(i));
        printf("%d %d %d\n", a, b, maks);
    }
    
    return 0;
}