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
    int n, m, z;
    scanf("%d %d %d", &n, &m, &z);
    
    int ret = 0;
    
    FOR(i, 1, z)
        if(i%n == 0 && i %m == 0)
            ret++;
        
    printf("%d\n", ret);
    
    return 0;
}