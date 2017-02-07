#include<cstdio>
#include<iostream>
#include<set>
#include<map>
#include<vector>
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

int val[90], s;

int main()
{
    scanf("%d", &s);

    REP(i, 10)
        val[i] = 1;

    FOR(position, 2, 9)
        FORD(sum, 81, 1)
            FOR(digit, 1, 9)
                if(sum >= digit)
                    val[sum] += val[sum-digit];

    printf("%d\n", val[s] + (s == 1));

    return 0;
}