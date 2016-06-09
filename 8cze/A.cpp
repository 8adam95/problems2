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

int tab[105];

int main()
{
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    tab[a]++;
    tab[b]++;
    tab[c]++;
    tab[d]++;
    tab[e]++;
    
    int maks = 0;
    
    FORD(i, 100, 1)
    {
        if(tab[i] >= 2)
        {
            if(tab[i] >= 3)
                maks = max(maks, i*3);
            else
                maks = max(maks, i*2);
        }
    }
    
    int sum = 0;
    
    FOR(i, 1, 100)
        if(tab[i])
            sum += tab[i]*i;
    
    sum -= maks;
        
        
    printf("%d\n", sum);
    
    


    return 0;
}