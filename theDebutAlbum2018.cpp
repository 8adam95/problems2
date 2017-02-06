#include<cstdio>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
#include<queue>
#include<iostream>
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

const int MOD = 1000000007;

int endA[50005], endB[50005];

int main()
{
    endA[0] = 1;
    endB[0] = 1;
    endA[1] = 1;
    endB[1] = 1;

    int n, a, b;
    
    scanf("%d %d %d", &n, &a, &b);
    
    FOR(i, 2, n)
    {
        for(int j = 1; j <= a && i-j >= 0; j++)
            endA[i] = (endA[i] + endB[i-j] % MOD) % MOD;
        
        for(int j = 1; j <= b && i-j >= 0; j++)
            endB[i] = (endB[i] + endA[i-j] % MOD) % MOD;
    }
    
    printf("%d\n", ((endA[n] + endB[n]) % MOD));


    return 0;
}