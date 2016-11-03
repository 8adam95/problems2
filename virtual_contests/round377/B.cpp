#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<queue>
#include<cmath>
#include<cstring>
#include<string>
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
    
    int n, k;
    int a[505];
    
    scanf("%d %d", &n, &k);
    REP(i, n)
        scanf("%d", &a[i]);

    int res = 0;
        
    FOR(i, 1, n-1)
        if(a[i]+a[i-1] < k)
        {
            res += k-(a[i]+a[i-1]);
            a[i] += k-(a[i]+a[i-1]);
        }

    printf("%d\n", res);
    REP(i, n)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}