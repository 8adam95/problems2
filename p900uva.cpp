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

int main()
{
    long tab[55];
    
    tab[1] = 1;
    tab[2] = 2;
    tab[3] = 3;
    
    for(int i = 4; i <= 50; i++)
        tab[i] = tab[i-1] + tab[i-2];
    
    
    while(true)
    {
        int a;
        scanf("%d", &a);
        if(a == 0)
            break;
        else
            printf("%ld\n", tab[a]);
    }
    
    
    return 0;
}