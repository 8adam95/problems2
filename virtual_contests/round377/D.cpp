#include<cstdio>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<queue>
#include<cmath>
#include<cstring>
#include<string>
#include<iostream>
using namespace std;


#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

int n, m;
int day[100005], s[100005];
bool pass[100005];

bool solve(int v)
{
    for(int i = 1; i <= m; i++)
        pass[i] = false;
    
    int val = 0;
    
    FORD(i, v, 1)
    {
        if(day[i] && !pass[day[i]])
        {
            val += s[day[i]];
            pass[day[i]] = true;
        }
        else if(val > 0)
            val--;        
    }
    FOR(i, 1, m)
        if(!pass[i])
            return false;
    return val == 0;
}


int main()
{
    scanf("%d %d", &n, &m);
    FOR(i, 1, n)
        scanf("%d", &day[i]);
    FOR(i, 1, m)
        scanf("%d", &s[i]);
        
        
    int l = 1, r = n;
    while(l < r)
    {
        int mid = (l+r)/2;
        if(solve(mid))
            r = mid;
        else
            l = mid+1;
    }
    
    if(solve(l))
        return printf("%d\n", l), 0;
    printf("-1\n");
    
    
}