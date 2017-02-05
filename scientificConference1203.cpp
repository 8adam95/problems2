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

int n, maks = -1, tab[30005];
pair<int, int> B[100005];

int main()
{  
    scanf("%d", &n);
    REP(i, n)
    {
        int u, v;
        scanf("%d %d", &u, &v);
        B[i] = MP(v,u);
        maks = max(maks, v);
    }
    
    sort(B, B+n);
    
    tab[0] = 0, tab[1] = 0;
    
    int l = 0;
        
    for(int i = 1; i <= maks; i++)
    {
        while(i >= B[l].F)
        {
            tab[i] = max(tab[i-1], tab[B[l].S-1]+1);
            if(l == n-1)
                break;
            l++;
        }
        tab[i] = max(tab[i-1], tab[i]);
     
    }
    
    printf("%d\n", tab[maks]);
    

    return 0;
}