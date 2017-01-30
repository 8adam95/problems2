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


int n, dp[20000005];

int main()
{
    scanf("%d", &n);
    
    dp[1] = 0;
    FOR(i, 2, 20000000)
    {
        dp[i] = 10000005;
        if(i%6 == 0)
            dp[i] = min(dp[i], min(dp[i/2], min(dp[i/3], dp[i-1]))+1);
        if(i%3 == 0)
            dp[i] = min(dp[i], min(dp[i/3], dp[i-1])+1);
        if(i%2 == 0)
            dp[i] = min(dp[i], min(dp[i/2], dp[i-1])+1);
        dp[i] = min(dp[i], dp[i-1]+1);
    }
    
    FOR(i, 1, n)
    {  
        int a;
        scanf("%d", &a);
        printf("Case %d: %d\n", i, dp[a]);
    }


    return 0;
}