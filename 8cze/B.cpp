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

int n, a, tab[105];

bool vis[105];

int main()
{
    scanf("%d %d", &n, &a);
    REP(i, n)
        scanf("%d", &tab[i]);
    a -= 1;
    
    for(int i = 0; i <= n; i++)
    {
        if(a+i < n && a-i >= 0)
            if(tab[a+i] == tab[a-i] && tab[a+i] == 1)
                vis[a+i] = vis[a-i] = true;
        if(a+i < n && a-i < 0)
            if(tab[a+i] == 1)
                vis[a+i] = true;
            
        if(a+i >= n && a-i >= 0)
            if(tab[a-i] == 1)
                vis[a-i] = true;
    }
    
    int cnt = 0;
    
    for(int i = 0; i < n; i++)
        cnt += vis[i];
    
    printf("%d\n", cnt);
        

    return 0;
}